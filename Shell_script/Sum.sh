#!/bin/bash
echo -n "Enter value : "
read a
echo -n "Enter value : "
read b
c=`expr $a + $b`
echo "Sum is : $c"
