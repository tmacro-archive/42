#!/bin/sh


IP=$(ifconfig | awk '$1 == "inet" && $2 != "127.0.0.1" {print $2}') 
if [ -z $IP ]; then
	echo "Je suis perdu!"
else
	echo $IP
fi
