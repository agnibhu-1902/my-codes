#!/bin/bash
#8.Write a shell script to accept a string in the command line and reverse the same string.
if [ $# -ne 1 ]
then
	echo "Invalid number of arguments"
	exit
fi
str=""
for ((i=0;i<${#1};i++))
do
	ch=${1:i:1}
	str=$ch$str
done
echo "Reversed string : $str"
