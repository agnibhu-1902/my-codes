#!/bin/bash
#11. Write a shell script that receives two file names as arguments. It should check whether the two file contents are same or not. If they are the same then the second file should be deleted.
if [ $# -ne 2 ]
then
	echo "Invalid number of arguments"
	echo "Usage: ./11.sh file1.txt file2.txt"
	exit
fi
if [ $1 -ef $2 ]
then
	echo "Same file given as arguments"
elif [ ! -f $1 ] || [ ! -f $2 ]
then
	echo "File doesn't exist"
elif cmp -s $1 $2
then
	echo "Contents of $1 and $2 are same"
	rm $2
	echo "File $2 has been deleted"
else
	echo "Contents of $1 and $2 are different"
fi
