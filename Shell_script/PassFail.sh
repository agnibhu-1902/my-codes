#!/bin/bash
echo -n "Enter three numbers : "
read a b c
avg=$((($a+$b+$c)/3))
if [ $avg -ge 60 ]
then
	echo "Division 1"
elif [ $avg -ge 45 ]
then
	echo "Division 2"
elif [ $avg -ge 30 ]
then
	echo "Division 3"
else
	echo "Fail"
fi
