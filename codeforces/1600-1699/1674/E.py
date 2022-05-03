from math import ceil, inf
import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    a = list(map(int,input().split()))
    singles = []
    ans = inf
    minInConsider = inf
    for i in range(0,n):
        cur =ceil(a[i]/2)
        if i-3>=0:
            temp = ceil(a[i-3]/2)
            minInConsider = min(minInConsider,temp)
            ans = min(ans,minInConsider+cur)
            
            
    # singles.sort()
    
    if len(singles)>0:
        ans = min(singles)
    # dbg("bhai",singles)
    # ans = singles[0]+singles[1]
    
    twoAdjacent = []
    for i in range(1,n):
        twoAdjacent.append(max(ceil(a[i]/2),ceil(a[i-1]/2),ceil((a[i]+a[i-1])/3)))
    ans = min(ans,min(twoAdjacent))
    
    threeAtATime = []
    if n>=3:
        for i in range(1,n-1):
            l = a[i-1]
            r = a[i+1]
            diff = abs(r-l)
            
            threeAtATime.append(min(l,r)+ceil(diff/2))
        ans = min(ans,min(threeAtATime))
        
    print(ans)
t = 1 #int(input())
while t:
    t-=1
    solve()