#!/bin/bash

fileToRemove="/tmp/some-file"

rm "$fileToRemove" 2> /dev/null

if [ $? -eq 0 ]; then
	echo "Success removing file: $fileToRemove"
else
	echo "File does not exist: $fileToRemove"
fi
