#!/bin/bash
#6.Write a shell script to find the frequency of vowels in a given string. String should be taken as input at runtime.
echo "Enter a string"
read str
count=$(echo $str | grep -o -i "[aeiou]" | wc -l)
echo "Frequency of vowels in '$str' : $count"
