import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    x = int(input())
    if x%2==0:
        print("YES")
    else:
        if x>=7:
            print("YES")
        else:
            print("NO")
    # 7 
    # 9 => 7+2
    # 11 => 7+4
    # 13 => 7+6
    # 15 => 7+8
t = int(input())
while t:
    t-=1
    solve()