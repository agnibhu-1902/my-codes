#!/bin/bash
echo -n "Enter two numbers : "
read a b
if [ $a -gt $b ]
then
	echo "$a is greater than $b"
else
	echo "$b is greater then $a"
fi
