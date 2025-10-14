i = 1
n = int(input())
while(i * 5 <= n):
    i *= 5
s = 0
while(i != 1):
    s += n//i
    i//=5
print(s)
