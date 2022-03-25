import os
from collections import Counter
def solve():
    n,m,k = map(int,input().split())
    l  = map(int,input().split())
    # ct = Counter(l)
    a,b,*c = sorted(l,reverse=True)
    # print(a,b)
    if a==b:
        print(m*a)
    else:
        if m<=k:
            print(m*a)
        else:
            bt = m//(k+1)
            ans = 0
            ans += bt*(k*a+b)
            m -= bt*(k+1)
            ans+=m*a
            print(ans)
    # print(a,b,c)
# 7 7 4 7 7 4 7 7 4
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 2
    while t:
        t-=1
        solve()