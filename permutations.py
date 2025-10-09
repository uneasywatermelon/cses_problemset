
s = int(input())
from sys import stdout
if s == 1:
    print(1)
elif s > 3:
    for x in range(2, s+1):
        if not (x & 1):
            stdout.write(f'{x} ')
 
    for x in range(1, s+1):
        if x & 1:
            stdout.write(f'{x} ')
    stdout.write('\n')
else:
    print("NO SOLUTION")
