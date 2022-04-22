from collections import defaultdict
from email.policy import default
import sys
def dbg(*args, **kwargs):
    # return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    cnt = defaultdict(int)
    for num in a:
        for curBit in range(0,30+1):
            if ((1<<curBit) & num)>0:
                pass
            else:
                cnt[curBit]+=1
    ans = 0
    dbg(cnt)
    for curBit in range(30,-1,-1):
        if k>= cnt[curBit]:
            ans+=1<<curBit
            k-=cnt[curBit]
    print(ans)
t = int(input())
while t:
    t-=1
    solve()