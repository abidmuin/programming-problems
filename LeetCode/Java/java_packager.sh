#!/bin/bash

set -e

FILENAME="$FILENAME"
FILE_DIR="$FILEDIR"

if [ -z "$FILENAME" ] && [ -n "$1" ]; then
    FILENAME="$1"
fi

if [ -z "$FILE_DIR" ] && [ -n "$2" ]; then
    FILE_DIR="$2"
fi

if [ -z "$FILENAME" ] || [ -z "$FILE_DIR" ]; then
    echo "Error: Missing filename or file directory"
    echo "Usage: $0 <filename> <file_directory>"
    exit 1
fi

PACKAGE_NAME=$(echo "$FILENAME" | tr '[:upper:]' '[:lower:]')
PACKAGE_DIR="$FILE_DIR/$PACKAGE_NAME"
mkdir -p "$PACKAGE_DIR"

sed -i "1i\\package ${PACKAGE_NAME};\\
" "${FILENAME}.java"

mv "${FILENAME}.java" "${PACKAGE_DIR}/"
