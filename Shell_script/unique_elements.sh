#!/bin/bash
#3. Write a shell to print all unique elements in an array.
declare -a arr
echo "Enter the number of elements you want to insert"
read n
echo "Enter all values"
for ((i=0;i<n;i++))
do
	read arr[$i]
done
echo "The unique elements are"
for ((i=0;i<n;i++))
do
	flag=0
	for ((j=0;j<i;j++))
	do
		if ((${arr[$i]}==${arr[$j]}))
		then
			flag=1
			break
		fi
	done
	if (($flag==0))
	then
		echo "${arr[$i]}"
	fi
done
