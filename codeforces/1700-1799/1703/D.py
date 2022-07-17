import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    seen = set()
    strings = []
    for i in range(n):
        s = input()
        strings.append(s)
        seen.add(s)
    ans = [0]*len(strings)
    for i in range(len(strings)):
        cur = strings[i]
        part1 = ""
        for delim in range(len(cur)-1):
            part1+=cur[delim]
            if part1 in seen and cur[delim+1:] in seen:
                ans[i] = 1
                break
    print(*ans,sep='')



t = int(input())
while t:
    t-=1
    solve()