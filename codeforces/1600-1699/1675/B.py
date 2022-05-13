import sys
import os
from tkinter import E
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    dbg(a)
    steps = 0
    for i in range(n-2,-1,-1):
        next = a[i+1]
        if next==0:
            print(-1)
            return
        else:
            while a[i]>=next:
                a[i]=a[i]//2
                steps+=1
    print(steps)
            
t = int(input())
while t:
    t-=1
    solve()