#!/bin/bash
#4.Write a shell script to find a number within an array using binary search.
declare -a arr
echo "Enter the number of array elements"
read n
echo "Enter array values"
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
echo "Enter the number to search"
read s
lb=0
ub=$(($n-1))
flag=0
while [ $lb -le $ub ]
do
	mid=$((($ub+$lb)/2))
	if [ $s -gt ${arr[$mid]} ]
	then
		lb=$(($mid+1))
	elif [ $s -lt ${arr[$mid]} ]
	then
		ub=$(($mid-1))
	else
		echo "$s is present"
		flag=1
		break
	fi
done
if [ $flag -eq 0 ]
then
	echo "$s is not present"
fi
