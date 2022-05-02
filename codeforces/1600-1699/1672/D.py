from collections import defaultdict
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    i,j = n-1,n-1
    ct = defaultdict(int)
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    while j>0:
        if b[j-1]==b[j]:
            ct[b[j]]+=1
            j-=1
        elif a[i]==b[j]:
            i-=1
            j-=1
        else:
            if ct[a[i]]>0:
                ct[a[i]]-=1
                i-=1
            else:
                print("NO")
                return
    print("YES")
t = int(input())
while t:
    t-=1
    solve()