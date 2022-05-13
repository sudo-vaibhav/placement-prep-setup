import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    a,b,c,x,y = map(int,input().split())
    x-=a
    y-=b
    if max(0,x)+max(0,y)<=c:
        print("YES")
    else:
        print("NO")
t = int(input())
while t:
    t-=1
    solve()