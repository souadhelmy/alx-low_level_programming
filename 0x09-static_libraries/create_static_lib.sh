#!/bin/bash

# create an empty static library called liball.a
ar rcs liball.a

# loop through all the .c files in the current directory
for c_file in *.c
do
  # compile the .c file into an object file
  gcc -c $c_file

  # add the object file to the static library
  ar rcs liball.a $c_file.o
done

# print a success message
echo "Static library liball.a created successfully!"

