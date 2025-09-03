#! /bin/bash
# A program to illustrate stdio concepts from the lecture.
# Sam Scott, McMaster University, 2025

echo "Hello, World!"

echo "Logging an error." >&2

echo "Say something, please"
read line
echo line
echo $line
echo "You entered: $line"

exit 0

