#!/bin/bash
#2. Write a shell programming to sum all odd no of an array and then convert the result by summing its digits to convert into a single digit.
declare -a arr
echo "Enter the number of elements you want to insert"
read n
echo "Enter all values"
for ((i=0;i<n;i++))
do
	read arr[$i]
done
sum=0
for ((i=0;i<n;i++))
do
	if ((${arr[$i]}%2 != 0))
	then
		sum=$(($sum+${arr[$i]}))
	fi
done
while [ $sum -ge 10 ]
do
	digit_sum=0
	while [ $sum -ne 0 ]
	do
		digit_sum=$(($digit_sum+$sum%10))
		sum=$(($sum/10))
	done
	sum=$digit_sum
done
echo "Result : $sum"
