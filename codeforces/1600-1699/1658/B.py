from math import factorial
import os
MOD = 998244353 

def solve():
    n = int(input())
    if n%2==1: print(0)
    else:
        print(
            ((factorial(n//2)%MOD)**2)%MOD
        )
        
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    t = int(input())
    while t:
        t-=1
        solve()
else:
    t = int(input())
    while t:
        t-=1
        solve()