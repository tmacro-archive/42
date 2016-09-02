#!/bin/sh

NUMBER=$(ldapsearch -s sub 'cn=*bon*' 2>/dev/null | grep '^cn' | wc -l) 
echo $NUMBER
