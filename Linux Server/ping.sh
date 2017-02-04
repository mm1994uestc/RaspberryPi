#!/bin/bash
for siteip in $(seq 98 106)
do 
	site="192.168.0.${siteip}"
	ping -c 1 -w 1 ${site} &> /dev/null
	if [ "$?" == "0" ]; then
		echo "$site is UP"
	else 
		echo "$site is DOWN"
	fi
done
