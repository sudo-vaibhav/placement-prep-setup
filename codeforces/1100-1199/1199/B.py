import os
def solve():
    h,l = map(int,input().split())
    print((l**2+h**2)/(2*h)-h)
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 2
    while t:
        t-=1
        solve()