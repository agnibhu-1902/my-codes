#!/bin/bash
# loops.sh

echo "I am invoked as: $0"
echo "Number of arguments passed: $#"
echo "First argument passed: $1"
echo "Second argument passed: $2"
if test $# -ge 2;
then
  if test $1 = $2;
  then
    echo "The two arguments are same."
  fi
fi
