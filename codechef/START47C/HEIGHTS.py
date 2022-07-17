import sys
import os
from collections import Counter
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('plac' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))

    A = list(sorted(set(a)))

    l,r = 0,len(A)-1
    ctr  = Counter(a)
    ans = 0
    # dbg(A)
    while l<=r:
        L,R = A[l],A[r]
        # dbg(L,R,ctr[L],ctr[R])
        if ctr[L]==1 or ctr[R]==1:
            ans +=1
        l+=1
        r-=1
    print(ans)

t = int(input())
while t:
    t-=1
    solve()