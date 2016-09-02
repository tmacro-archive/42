#!/bin/sh

cat /etc/passwd | grep -v "#" | awk -F ':' 'BEGIN{OFS='\n'} NR%2==0 && NR>0{print $1;}' | rev | sort -dr | awk -v ORS=, -v begin=$FT_LINE1 -v end=$FT_LINE2 'NR>=begin && NR<=end {print $1;}' | sed 's/,$/./' | tr -d '\n'

