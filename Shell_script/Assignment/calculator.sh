#!/bin/bash
#1.Write a shell script to perform basic floating point arithmetic operations between two nos.
echo "Enter two numbers"
read a b
echo "Press 1 for addition"
echo "Press 2 for subtraction"
echo "Press 3 for multiplication"
echo "Press 4 for division"
read ch
case $ch in
	1) 	s=$(echo "scale=2;($a+$b)"|bc);;
	2)	s=$(echo "scale=2;($a-$b)"|bc);;
	3)	s=$(echo "scale=2;($a*$b)"|bc);;
	4)	s=$(echo "scale=2;($a/$b)"|bc);;
	*)	echo "Invalid choice!"
esac
echo "Result : $s"
