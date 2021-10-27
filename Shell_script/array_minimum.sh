#!/bin/bash
#1. Write a shell programming to find out minimum no from array.
declare -a arr
echo "Enter the number of elements you want to insert"
read n
echo "Enter all values"
for ((i=0;i<n;i++))
do
	read arr[$i]
done
min=${arr[0]}
for ((i=1;i<n;i++))
do
	if ((${arr[$i]}<min))
	then
		min=${arr[$i]}
	fi
done
echo "The minimum value is : $min"
