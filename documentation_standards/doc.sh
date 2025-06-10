#!/bin/bash
#
# Every script should have a header comment with a 
# description of the purpose, an example of use and/or
# usage string, and the possible exit codes and their
# meanings.
#
# AUTHOR, DATE, VERSION go here
#####################################################


# GLOBALS VARIABLES should be at the top and explained
# if it's not obvious what they mean.

NAME=Student # Default name

#####################################################
# Description of purpose of this function goes here
#
# GLOBALS: list any global variables the function uses
# PARAMS:  List the purpose of $1, $2, $3, etc. here
# RETURNS: Explain the return value here  
#####################################################
foo() {
	echo "Hello, Foo!"
}

#####################################################
# Main program description here if different from 
# the overall description given in the first header
#####################################################

# Add comments to mark sections of the code
# Add comments to explain anything that's not obvious

# Aim for self-documenting code (meaningful variable
# and function names, obvious and clear code structure,
# etc.) The easier the code is to read, the less you 
# need to comment.

if [[ ! $1 = "" ]]; then
	NAME=$1
fi

echo "Hello, $NAME!"
foo
