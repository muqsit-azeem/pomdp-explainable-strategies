#!/bin/bash

set -e

echo "==> Cloning Storm repo and extracting 'resources/' directory..."

# Clone only if the folder doesn't exist
if [ -d "resources" ]; then
    echo "-> 'resources/' already exists. Skipping download."
    exit 0
fi

# Clone the full repo (shallow clone for speed)
git clone --depth=1 https://github.com/moves-rwth/storm.git storm-tmp

# Move the desired folder out
mv storm-tmp/resources ./

# Clean up the rest
rm -rf storm-tmp

echo "'resources/' directory successfully downloaded and extracted."

