import sys

file = open(sys.argv[1])

numbers = []

for line in file:
	line = line.lower()
	if 'nicolas' in line and 'bomber' in line:
		cols = line.split('\t')
		for col in cols:
			if any(char.isdigit() for char in col):
				print line
				numbers.append(col)

print numbers
