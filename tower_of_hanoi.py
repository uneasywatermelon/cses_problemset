from sys import stdout as o, setrecursionlimit
setrecursionlimit(900)

n = int(input())

def solve(n, fr, to):
    if n == 0:
        return
    OTHER = 6 - fr - to
    solve(n-1, fr, OTHER)
    o.write(f"{fr} {to}\n")
    solve(n-1, OTHER, to)
print((1<<n)-1)
solve(n, 1, 3)

