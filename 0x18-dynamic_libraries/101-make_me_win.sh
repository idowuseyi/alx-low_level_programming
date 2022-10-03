#!/bin/bash
wget -P /tmp/ https://github.com/idowuseyi/alx-low_level_programming/blob/50ced285c5c1e40cd9758c521e71a5120777a77e/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
