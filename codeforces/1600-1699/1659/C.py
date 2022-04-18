import sys
def dbg(*args, **kwargs):
    return 
    print(*args, file=sys.stderr, **kwargs)

def solve():
    n,move,conq = map(int,input().split())
    kdoms = list(map(int,input().split()))
    kdoms.insert(0,0)
    dbg(kdoms)
    curIdx = 0
    nextIdx = 1
    ans = 0
    while nextIdx<=n:
        leftToConq = n - nextIdx
        cur,next = kdoms[curIdx],kdoms[nextIdx]
        mandatoryCost = conq*(next-cur)
        ans += mandatoryCost
        dbg("conqueor",next," at cost",mandatoryCost)
        moveCost = move*(next-cur)
        excessCostIfNotMove = leftToConq*mandatoryCost
        dbg("can move to",next)
        dbg("movecost:",moveCost,", excess cost",excessCostIfNotMove)
        if excessCostIfNotMove<=moveCost:
            dbg("stay at",cur)
            pass
        else:
            dbg("move to",next,"at cost",moveCost)
            ans += moveCost
            curIdx = nextIdx
        nextIdx+=1
        dbg("cost after iteration:",ans)
    print(ans)
    
t = int(input())
while t:
    t-=1
    solve()