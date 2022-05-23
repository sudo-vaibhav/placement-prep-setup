from math import inf
import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    aMin = min(a)
    bMax = max(b)
    
    if aMin>=bMax:
        print(0)
    else:
        # tipping point must be estimated now for min of a
        l = aMin
        r = bMax
        ans = inf
        
        def bringDown(arr,pt):
            ans = 0
            for e in arr:
                if e>pt:
                    ans += e-pt
            return ans
        
        def takeUp(arr,pt):
            ans = 0
            for e in arr:
                if e<pt:
                    ans += pt-e
            return ans
        while l<=r:
            m1 = l+(r-l)//3
            m2 = r-(r-l)//3
            
            
            
            red1 = bringDown(b,m1)
            inc1 = takeUp(a,m1)
            
            red2 = bringDown(b,m2)
            inc2 = takeUp(a,m2)
            
            
            tot1 = red1 + inc1
            tot2 = red2 + inc2
            
            ans = min(ans,tot1,tot2)
            
            if tot1<tot2:
                r = m2-1
            elif tot1>tot2:
                l = m1+1
            else:
                l = m1+1
                r = m2-1
            
        print(ans)
        
    
t =1

while t:
    t-=1
    solve()