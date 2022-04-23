from cmath import inf
from heapq import heapify, heappop, heappush
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list((-i,i) for i in map(int,input().split()))
    heapify(a)
    curTurn = 0
    ans = inf
    while a[0][0]!=-1 and a[0][0]!=0:
        g,h = heappop(a)
        # if h%2==0:
            # heappush(a,(-h//2,h//2))
            # heappush(a,(-h//2,h//2))
        # else:
        heappush(a,(-1,1))
        heappush(a,(-(h-1),(h-1)))
        curTurn = 1-curTurn
    winner = 1-curTurn
    print("errorgorn" if winner==0 else 'maomao90')
    
    
    
t = int(input())
while t:
    t-=1
    solve()