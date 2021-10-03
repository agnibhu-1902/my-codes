#!/bin/bash

#Basic calculator

echo "Enter two values :"
read a b
echo "1. Add"
echo "2. Subtract"
echo "3. Multiply"
echo "4. Divide"
echo "Enter choice :"
read ch
case $ch in
	1) 	s=$(($a+$b))
		echo "Result : $s";;
	2)	s=$(($a-$b))
		echo "Result : $s";;
	3)	s=$(($a*$b))
		echo "Result : $s";;
	4)	s=$(echo "scale=3;($a/$b)"|bc)
		echo "Result : $s";;
	*)	echo "Invalid choice!"
esac
