#!/bin/bash
#7.Write a shell script that takes a command line argument and reports on whether it is directory, a file, or something else.
if [ $# -ne 1 ]
then
	echo "Invalid number of arguments"
	exit
fi
if [ -f $1 ]
then
	echo "$1 is a file"
elif [ -d $1 ]
then
	echo "$1 is a directory"
else
	echo "$1 is something else"
fi
