import os
def solve():
    n = int(input())
    h=0
    t=1
    i=1
    while n-t>=0:
        n-=t
        i+=1
        t+=i
    print(i-1)
if os.environ.get('APPDATA') and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 2
    while t:
        t-=1
        solve()