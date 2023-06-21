#!/bin/bash

if [ $# -eq 0 ]; then
	echo "Input the filename"
	exit 0
fi

Command=$1
echo $Command

time1=`date +%s.%N`

$1

time2=`date +%s.%N`

diff=`echo "$time2 - $time1" | bc`

echo "=========================="

echo "걸린시간 : $diff"
