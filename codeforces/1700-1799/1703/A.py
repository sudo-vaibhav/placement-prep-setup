import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    s = input()
    if len(s)==3 and s.upper()=="YES":
        print("YES")
    else:
        print("NO")
t = int(input())
while t:
    t-=1
    solve()