#!/bin/bash
# for loop

for i in file_{1..9}
do
  echo $i
done

for i in $(ls /bin/p*)
do
  echo $i
done
