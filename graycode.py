import sys
n = int(input())
tot = 2 ** n
print("\n//\n")


a = []
for _ in range(n):
    t = tot//(2**(_+1))
    r = []
    for i in range(tot):
        d = (i//t % 2 == 0)
        r.append(1 if d else 0)
    a.append(r)
for y in range(len(a[0])):
	for x in range(len(a)):
		sys.stdout.write(f'{a[x][y]}')
	sys.stdout.write('\n')
