#!/bin/bash
# s01.sh is my first script.
echo "Hello, world!"
echo -n I am invoked as:
echo $0
ps
myvar=MYVAR
echo $myvar
echo -n Nimber of arguments passed:
echo $#
echo -n First argument:
echo $1
