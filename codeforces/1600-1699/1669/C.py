import sys
def dbg(*args, **kwargs):
    # return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    if len(a)<=1:
        print("YES")
        return
    l = [a[i] for i in range(0,n,2)]
    r = [a[i] for i in range(1,n,2)]
    
    
    L,R = l[0]%2,r[0]%2
    LL = [L==i%2 for i in l]
    RR = [R==i%2 for i in r]
    dbg(LL,RR)
    if ((LL.count(True)==len(LL)) or (LL.count(False)==len(LL))) and ((RR.count(True)==len(RR) or RR.count(False)==len(RR))):
        print("YES")
    else:
        print("NO")
    
t = int(input())
while t:
    t-=1
    solve()