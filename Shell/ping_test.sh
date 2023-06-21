#!/bin/bash

gateway=("192.168.0.1")
ping -c 1 192.168.0.1>/dev/null

if [ $? == 0 ]
then
	echo "gateway ping success!"
else
	echo "gateway ping failed!"
fi
