import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('plac' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    s = input()
    firstOp = "double"
    if n==1:
        print("YES")
        return
    if n%2==1:
        firstOp = "add"
    def solve(string):
        if len(string)==0:
            return True
        if len(string)%2==1:
            return False
        
        mid = len(string)//2
        if string[:mid]!=string[mid:]:
            return False
        return solve(string[:mid-1])
        
    res = solve(s if firstOp=="double" else s[:-1])

    if res:
        print("YES")
    else:
        print("NO")


t = int(input())
while t:
    t-=1
    solve()