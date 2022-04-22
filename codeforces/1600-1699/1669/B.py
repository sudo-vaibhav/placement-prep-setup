import sys
from typing import Counter
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    ct = Counter(a)
    for i in ct:
        if ct[i]>=3:
            print(i)
            return
    else:
        print(-1)
        
t = int(input())
while t:
    t-=1
    solve()