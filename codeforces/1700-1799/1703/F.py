from bisect import bisect_left, bisect_right
from math import inf
import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('placement-prep-setup' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))

    temp = []
    indices = []
    ans = 0
    for i in range(n):
        cur = a[i]
        if cur<i+1:
            ans += bisect_left(indices,cur)
            # temp.append((cur,i+1))
            indices.append(i+1)
    # for i in range(len(temp)):
        # f = bisect_left(temp,(temp[i][1],-inf),i+1)
        # dbg(f-i)
    # dbg(temp)
    print(ans)
t = int(input())
while t:
    t-=1
    solve()