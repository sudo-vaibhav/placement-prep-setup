import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,m = map(int,input().split())
    
    if n==1 and m==1:
        print(0)
    elif (n==1 and m>2) or (m==1 and n>2):
        print(-1)
    elif (n==1 or m==1):
        print(1)
    else:
        base = n+m-2
        diff = max(n,m)-min(n,m)
        if diff%2==0:
            base += diff
        else:
            base += diff-1 
        print(base)  
t = int(input())
while t:
    t-=1
    solve()