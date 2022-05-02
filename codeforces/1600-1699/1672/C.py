from math import inf
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    cases = 0
    first = inf
    last = inf
    for i in range(n-1):
        if a[i]==a[i+1]:
            cases+=1
            if first == inf:
                first = [i,i+1]
            last = [i,i+1]
    if cases<=1:
        print(0)
        return
    
    print(max(1,last[0]-first[1]))
t = int(input())
while t:
    t-=1
    solve()