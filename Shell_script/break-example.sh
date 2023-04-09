#!/bin/bash
n=10
i=0
while [ $i -lt $n ]
do
  echo $i
  j=0
  while [ $j -le $i ]
  do
    echo -n "$j "
    (( j++ ))
    if [ $j -eq 7 ]
    then
      break 2
    fi
  done
  (( i++ ))
done
