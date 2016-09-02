#!/bin/sh

ifconfig | awk '{$1=$1}1' | grep '^ether' | sed 's/ether //g'
