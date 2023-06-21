#!/bin/bash

lists=$(ls)
num=${#lists[@]}
index=0

echo $lists
echo ${#lists[@]}
echo $num

while [ $num -le 0 ]
do
	echo ${lists[$index]}
	index=`expr $index + 1`
	num=`expr $num = 1`
done
