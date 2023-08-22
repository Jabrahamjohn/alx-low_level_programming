#!/bin/bash

# Compile all .c files in the current directory into a dynamic library

# Gather all .c files in the current directory
SOURCE_FILES=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$SOURCE_FILES" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the dynamic library
gcc -shared -o liball.so -fPIC $SOURCE_FILES

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully."
else
    echo "Error creating dynamic library."
fi
