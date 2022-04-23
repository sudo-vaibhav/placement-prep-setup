from math import floor
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,x = map(int,input().split())
    shops = list(map(int,input().split()))
    shops.sort()
    ps = 0
    ans = 0
    dbg(x,shops)
    temp = []
    for i in range(n):
        diff  = (x-ps-shops[i]+i+1)//(i+1)
        if diff>0:
            ans += diff
            temp.append(diff)
            ps += shops[i]
        else:
            break
    dbg(x,"taken",temp)
    # days = x-shops[0]+1
    print(ans)
    # dbg(days)
t = int(input())
while t:
    t-=1
    solve()