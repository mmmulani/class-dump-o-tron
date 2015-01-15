#!/bin/bash

# Run this with:
# find /Applications/Xcode.app/ -type f -perm -100 -exec ./extract.sh '{}' \;
# Afterwords run: (to remove all empty directories)
# find . -d -type d -empty -exec rmdir {} \;

APP=$1
BASE_DIR=`pwd`

OUTPUT=$(file "$APP")
if [[ $OUTPUT == *Mach-O* ]]; then
  TARGET_DIR=$BASE_DIR"/"$APP
  mkdir -p "$TARGET_DIR"
  class-dump -H -o "$TARGET_DIR" "$APP" > /dev/null
  nm -g -U -j "$APP" > "$TARGET_DIR"/exported_symbols.h
fi