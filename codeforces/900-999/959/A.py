import os
def solve():
    n = int(input())
    if n%2==0:
        print("Mahmoud")
    else:
        print("Ehab")
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 2
    while t:
        t-=1
        solve()