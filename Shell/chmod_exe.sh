#!/bin/bash

for file in `ls *.txt`
do
	chmod +x $file
	echo "${file} 실행권한 추가 완료"
done
