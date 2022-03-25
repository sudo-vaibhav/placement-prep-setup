import os
MAX = 10**9
def solve():
    t = int(input())
    while t:
        t-=1
        a,dc,c = map(int,input().split())
        A = a
        C = c//dc
        if C>A:

            print("1 -1")
        elif C<A:
            if c<=A:
                print("-1",dc)
            else:
                print("1",dc)
        else:

            print("1 -1")

if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 1
    while t:
        t-=1
        solve()