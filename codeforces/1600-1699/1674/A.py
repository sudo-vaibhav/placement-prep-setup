import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    x,y = map(int,input().split())
    if y%x!=0:
        print(0,0)
    else:
        temp = y//x
        if temp<1 or temp>10**9:
            print("0 0")
            return
        print(1,y//x)
t = int(input())
while t:
    t-=1
    solve()