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
    seen = set()
    ans = 0
    for i in s:
        if i not in seen:
            ans+=1
            seen.add(i)
        ans+=1
    print(ans)
t = int(input())
while t:
    t-=1
    solve()