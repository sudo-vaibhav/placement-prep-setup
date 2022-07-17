import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('plac' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    i1,iN = a.index(1),a.index(n)
    # dbg(i1,iN)
    ans = i1+abs(iN-n+1)
    if i1>iN:
        ans -=1
    print(ans)
t = int(input())
while t:
    t-=1
    solve()