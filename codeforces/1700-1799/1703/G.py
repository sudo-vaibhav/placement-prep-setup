import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('placement' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)

def getBadKeyOutput(startIdx,a):
    ans = 0
    for i,idx in enumerate(range(startIdx,startIdx+32)):
        if idx<len(a):
            ans += a[idx]>>(i+1)
        else:break
    return ans

def solve():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    ans = 0
    running = 0
    for keyEnd in range(-1,n):
        if keyEnd>-1:
            running += a[keyEnd]
            running -= k
        temp = running# - (k if keyEnd>-1 else 0)
        temp += getBadKeyOutput(keyEnd+1,a)
        ans = max(ans,temp)
    print(ans)

t = int(input())
while t:
    t-=1
    solve()