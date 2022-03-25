import os
def solve():
    t = int(input())
    while t:
        t-=1
        a,b,c,d = map(int,input().split())
        Z = c
        Y = c
        X = a
        print(X,Y,Z)
    
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 1
    while t:
        t-=1
        solve()