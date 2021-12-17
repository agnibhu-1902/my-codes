#!/bin/bash
#5.Write a shell script to sort a set of integer numbers using bubble sort.
declare -a arr
echo "Enter the number of array elements"
read n
echo "Enter array elements"
for ((i=0;i<n;i++))
do
	read arr[$i]
done
for ((i=0;i<n-1;i++))
do
	for ((j=0;j<n-i-1;j++))
	do
		if [ ${arr[$j]} -gt ${arr[$j+1]} ]
		then
			temp=${arr[$j]}
			arr[$j]=${arr[$j+1]}
			arr[$j+1]=$temp
		fi
	done
done
echo "Elements in sorted order"
for ((i=0;i<n;i++))
do
	echo "${arr[$i]}"
done
