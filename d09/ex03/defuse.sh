OLD=$(stat -t %s -f %a -- bomb.txt)
NEW=$(($OLD-1))
echo $NEW
