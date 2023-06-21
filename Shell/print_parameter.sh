#!/bin/bash

# $()는 백틱과 같이 안의 인수를 명령어 실행 처리
# 터미널에서 받은 인수 $0을 dirname하여 디렉토리명을 얻고 cd 후 pwd로 절대경로값을 변수에 저장

scriptFolder=$(cd $(dirname "$0") && pwd)

echo $scriptFolder

scriptName=$(basename $scriptFolder)

echo $scriptName
