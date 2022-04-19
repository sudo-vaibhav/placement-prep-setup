import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    if n>m:
        print("NO")
        return
    a.sort()
    toPlaceNext = 0 
    dbg(a)
    for i in range(0,n-1):
        dbg(toPlaceNext)
        toPlaceNext += a[i+1]+1
        # if toPlaceNext>m-a[0]:
            # print("NO")
            # return
    reachNeeded = toPlaceNext+a[n-1]
    if reachNeeded>=m:
        print("NO")
        return
    print("YES")
        
t = int(input())
while t:
    t-=1
    solve()