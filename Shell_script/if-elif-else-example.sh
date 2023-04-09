#!/bin/bash
# if-elif-else

if [ $# -gt 2 ]
then
  echo arguments are given and more than sufficient $#
elif [ $# -gt 1 ]
then  
  echo arguments are given and sufficient $#
elif [ $# -gt 0 ]
then
  echo arguments are given but not sufficient $#
else
  echo arguments are needed $#
fi
