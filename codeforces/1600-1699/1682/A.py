import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    s = input()
    centre = n//2
    ans = 0
    val = s[centre]
    l = centre
    r = centre+1
    while l>=0:
        if s[l]==val:
            ans+=1
            l-=1
        else:
            break
    while r<n:
        if s[r]==val:
            ans+=1
            r+=1
        else:
            break
    print(ans)
t = int(input())
while t:
    t-=1
    solve()