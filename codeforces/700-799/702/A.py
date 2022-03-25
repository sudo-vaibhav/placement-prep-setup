import os

def solve():
    n = int(input())
    prev = float("inf")
    mle=1
    le = 1
    l = map(int,input().split())
    for i in l:
        if(i<=prev):
            mle = max(le,mle)
            le=1
        else:
            le+=1
        prev = i
    mle = max(le,mle)
    print(mle)

if "codeforces" in os.environ.get("APPDATA"):
    solve()
else:
    t = 3
    while t:
        t-=1
        solve()