#!/bin/bash
# Shell script

for i in `ls /bin`
do
  echo /bin/$i
  file /bin/$i | grep -i "universal"
done
