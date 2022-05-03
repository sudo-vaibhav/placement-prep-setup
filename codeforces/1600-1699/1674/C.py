import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    s =  input()
    t = input()
    if "a" in t:
        if len(t)>1:
            print(-1)
        else:
            print(1)
    else:
        print(2**len(s))
        
t = int(input())
while t:
    t-=1
    solve()