#!/usr/bin/env bash
set -e

# Check for binary in root directory first
if [[ -f "tes3mp-server" ]]; then
    echo "Found tes3mp-server in root directory"
else
    echo "ERROR: tes3mp-server not found in root directory!"
    echo "Current directory: $(pwd)"
    echo "Directory contents:"
    ls -la
    exit 1
fi

# Server-only configuration
PACKAGE_BINARIES=("tes3mp-server")
SERVER_LIBRARIES=(
    "libRakNet.so"
    "libboost_system.so"
    "libboost_thread.so"
    "libluajit-5.1.so"
    "liblua5.1.so"
    "libtinyxml.so"
)
SERVER_DEFAULTS=(
    "tes3mp-server-default.cfg"
    "LICENSE"
)

# Create directory structure
mkdir -p tes3mp-server/{bin,lib,server} 

# Copy server binary
if [ -f "install/bin/tes3mp-server" ]; then
    cp -v install/bin/tes3mp-server tes3mp-server/bin/
elif [ -f "build/apps/openmw-mp/tes3mp-server" ]; then
    cp -v build/apps/openmw-mp/tes3mp-server tes3mp-server/bin/
else
    echo "ERROR: tes3mp-server binary not found!"
    find . -name tes3mp-server
    exit 1
fi

# Copy required libraries
for LIB in "${SERVER_LIBRARIES[@]}"; do
    find /usr/lib /usr/local/lib /lib/x86_64-linux-gnu/ -name "$LIB*" \
        -exec cp -v --preserve=links {} tes3mp-server/lib/ \; 2>/dev/null || true
done

# Copy RakNet specifically
find ../raknet/ -name "libRakNet.so*" -exec cp -v --preserve=links {} tes3mp-server/lib/ \;

# Copy config files
for DEFAULT in "${SERVER_DEFAULTS[@]}"; do
    [ -f "$DEFAULT" ] && cp -v "$DEFAULT" tes3mp-server/
done

# Get CoreScripts
echo "Downloading CoreScripts..."
git clone --depth 1 https://github.com/tes3mp-MP/CoreScripts.git tes3mp-server/server

# Download cjson
echo "Downloading cjson..."
mkdir -p tes3mp-server/server/lib
curl -o tes3mp-server/server/lib/cjson.dll -L \
    https://github.com/tes3mp-MP/lua-cjson/releases/download/Stable-CI/cjson-MinSizeRel.dll

# Create server wrapper
cat << 'EOF' > tes3mp-server/tes3mp-server
#!/bin/bash
GAMEDIR="$(cd "$(dirname "$0")"; pwd -P)"
TES3MP_HOME="$HOME/.config/openmw"

# Handle server config
if [[ -f "$TES3MP_HOME"/tes3mp-server.cfg ]]; then
    echo "Using existing server config from $TES3MP_HOME"
elif [[ -f "$GAMEDIR"/tes3mp-server-default.cfg ]]; then
    echo "Using default server config from package"
    mkdir -p "$TES3MP_HOME"
    cp "$GAMEDIR"/tes3mp-server-default.cfg "$TES3MP_HOME"/tes3mp-server.cfg
fi

# Handle CoreScripts
if [[ ! -d "$TES3MP_HOME"/server ]]; then
    echo "Setting up CoreScripts in $TES3MP_HOME"
    cp -r "$GAMEDIR"/server "$TES3MP_HOME"/
    sed -i "s|home = .*|home = $TES3MP_HOME/server|g" "$TES3MP_HOME"/tes3mp-server.cfg
fi

# Run server
cd "$GAMEDIR"
LD_LIBRARY_PATH="./lib" ./bin/tes3mp-server "$@"
EOF

chmod +x tes3mp-server/tes3mp-server

# Create archive
echo "Creating final archive..."
tar czf tes3mp-server.tar.gz tes3mp-server/

echo "Server package created:"
ls -lh tes3mp-server.tar.gz
