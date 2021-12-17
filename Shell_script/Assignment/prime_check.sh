#!/bin/bash
#2.Write a shell script / program to check whether the number is prime or not.
echo "Enter a number"
read n
c=0
for ((i=1;i<=n;i++))
do
	if (($n%$i==0))
	then
		c=$(($c+1))
	fi
done
if [ $c -eq 2 ]
then
	echo "Prime number"
else
	echo "Not a prime number"
fi
