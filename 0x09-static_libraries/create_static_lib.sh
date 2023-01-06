#!/bin/bash

# Create an empty list of object files
objects=""

# Find all .c files in the current directory and create an object file for each
for file in *.c
do
  gcc -c -o "${file%.*}.o" "$file"
  objects="$objects ${file%.*}.o"
done

# Create the static library liball.a from the object files
ar rcs liball.a $objects
