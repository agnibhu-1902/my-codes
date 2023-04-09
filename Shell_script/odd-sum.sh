sum=0
for (( i=1 ; i<$1 ; i++ ))
do
  if [ $((i%2)) -eq 1 ]
  then
    sum=$((sum+i))
  fi
done
echo $sum
