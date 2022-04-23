import sys
def dbg(*args, **kwargs):
    # return
    print(*args, file=sys.stderr, **kwargs)
    
def getdiff(a):
    diffs = 0
    for i in range(0,len(a)-1):
        diffs+= abs(a[i]-a[i+1])
    return diffs
def solve():
    n,x = map(int,input().split())
    a = list(map(int,input().split()))
    mi,ma = min(a),max(a)
    dbg(x)
    ans = getdiff(a)
    e1,e2 = a[0],a[-1]
    if mi>1:
        ans+=max(0,min(2*(mi-1),e1-1,e2-1))
    if ma<x:
        ans+=max(0,min(2*(x-ma),x-e1,x-e2))
    print(ans)
t = int(input())
while t:
    t-=1
    solve()