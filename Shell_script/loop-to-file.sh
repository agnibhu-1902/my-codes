#!/bin/bash
filename=largefile.txt
if [ -e $filename ]
then
	echo File $filename exists!
	exit 1
fi

i=1
while [ $i -lt 10 ]
do
	echo $i $[$i+1]
	(( i++ ))
done > $filename

echo File $filename written.
ls -l $filename
exit 0
