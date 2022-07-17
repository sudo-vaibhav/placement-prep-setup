import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    x = int(input())

    ans = x//10
    x-=ans*10
    print(x)
t = int(input())
while t:
    t-=1
    solve()