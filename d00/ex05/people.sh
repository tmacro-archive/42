#!/bin/sh

# First search ldap for the appropriate records
# The filter with grep for the cn lines
# Finally uses sort -nr to reverse the sorting
ldapsearch -s sub "uid=z*" 2>/dev/null | grep '^cn' | sort -nr
