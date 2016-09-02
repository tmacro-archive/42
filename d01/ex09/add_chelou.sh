#!/bin/sh
# Transliterate the first number
NUM1=$(echo "$FT_NBR1" | sed -e "s/'/0/g" -e 's/\\/1/g' -e 's/"/2/g' -e 's/?/3/g' -e 's/!/4/g')
# Transliterate the second number
NUM2=$(echo "$FT_NBR2" | sed -e 's/m/0/g' -e 's/r/1/g' -e 's/d/2/g' -e 's/o/3/g' -e 's/c/4/g')
# actually do the math
SUM=$(echo "obase=13; ibase=5; $NUM2+$NUM1" | bc)
# Convert it to the final base
echo "$SUM" | sed -e 's/0/g/g' -e 's/1/t/g' -e 's/2/a/g' -e 's/3/i/g' -e 's/4/o/g' -e 's/5/ /g' -e 's/6/l/g' -e 's/7/u/g' -e 's/8/S/g' -e 's/9/n/g' -e 's/A/e/g' -e 's/B/m/g' -e 's/C/f/g'
