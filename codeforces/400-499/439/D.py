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
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    AMin = min(A)
    BMax = max(B)
    
    if AMin>=BMax:
        print(0) # no need to do any changes
    else:
        # tipping point must be estimated now for min of a
        l = AMin
        r = BMax
        ans = inf
        
        def costToBringBValsDown(pt):
            ans = 0
            for e in B:
                if e>pt:
                    ans += e-pt
            return ans
        
        def costToTakeAValsUp(pt):
            ans = 0
            for e in A:
                if e<pt:
                    ans += pt-e
            return ans
        while l<=r:
            
            m1 = l+(r-l)//3 # guess 1
            m2 = r-(r-l)//3 # guess 2
            
            red1 = costToBringBValsDown(m1)
            inc1 = costToTakeAValsUp(m1)
            # cost of guess 1
            tot1 = red1 + inc1
            
            red2 = costToBringBValsDown(m2)
            inc2 = costToTakeAValsUp(m2)
            # cost of guess 2            
            tot2 = red2 + inc2
            
            ans = min(ans,tot1,tot2)
            
            if tot1<tot2:
                r = m2-1 # because now answer cannot possibly lie in [m2,r]
            elif tot1>tot2:
                l = m1+1 # because now answer cannot possibly lie in [l,m1]
            else:
                # now answer has to lie within [m1+1,m2-1]
                l = m1+1 
                r = m2-1
            
        print(ans)
        
    
t =1

while t:
    t-=1
    solve()