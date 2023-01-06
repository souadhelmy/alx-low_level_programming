#!/bin/bash

# Create an empty list of object files
object_files=()

# Loop through all the .c files in the current directory
for file in ./*.c
do
  # Compile the .c file into a .o file
  gcc -c -o "${file%.c}.o" "$file"
  # Add the .o file to the list of object files
  object_files+=("${file%.c}.o")
done

# Create the static library from the object files
ar rcs liball.a "${object_files[@]}"

