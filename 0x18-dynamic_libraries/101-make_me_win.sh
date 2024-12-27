#!/bin/bash
wget -P /tmp https://github.com/Tasneem205/alx-low_level_programming/raw/refs/heads/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
