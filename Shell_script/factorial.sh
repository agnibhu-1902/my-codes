#!/bin/bash

#Factorial calculation

echo "Enter a number :"
read n
fact=1
while [ $n -ne 0 ]
do
	fact=$(($n*$fact))
	n=$(($n-1))
done
echo "Factorial : $fact"
