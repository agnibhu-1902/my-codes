#!/bin/bash
#3.Write a shell script program to check if the Number is a Palindrome or not.
echo "Enter a number"
read n
s=0
w=$n
while [ $w -ne 0 ]
do
	d=$(($w%10))
	s=$(($s*10+$d))
	w=$(($w/10))
done
if [ $s -eq $n ]
then
	echo "Palindrome number"
else
	echo "Not a palindrome number"
fi
