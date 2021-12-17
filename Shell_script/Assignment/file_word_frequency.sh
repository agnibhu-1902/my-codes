#!/bin/bash
#10.Develop an interactive script that asks for a word and a file name and then tells how many times that word occurred in the file.
echo "Enter filename"
read file
echo "Enter word"
read word
if [ ! -f $file ]
then
	echo "File does not exist"
else
	echo "Number of occurrences of $word in $file"
	grep -c -i $word $file
fi
