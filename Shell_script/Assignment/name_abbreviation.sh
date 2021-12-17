#!/bin/bash
#9.Write a shell script to display a name in abbreviation form using command line arguments.
nstr=""
if [ $# -eq 0 ]
then
	echo "No arguments given"
	exit
fi
for item in $@
do
	ch=${item:0:1}
	nstr=$nstr$ch.
done
echo "Abbreviated form : $nstr"
