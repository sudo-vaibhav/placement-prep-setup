from math import ceil, inf
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    # dbg(a)
    # if n%2==1:
    # l = a[:-1+n//2][::-1]
    # r = a[(n//2):]
        # r = r[1:]
    def pr(nums):
        prev = 0
        ans = 0
        for i in range(len(nums)):
            cur = nums[i]
            x = inf
            if prev%cur==0:
                x = 1+(prev//cur)
            else:
                x = ceil(prev/cur)  
            prev = cur*x
            ans+=x
        dbg("ans",nums,ans)
        return ans
            
    # dbg(l)
    # dbg(r)   
    # print(pr(l)+pr(r))
    
    ans = inf
    for pivotPt in range(0,n):
        l = a[:pivotPt][::-1]
        r = a[pivotPt+1:]
        dbg(pivotPt,l,r)
        temp = pr(l)+pr(r)
        ans = min(ans,temp)
    print(ans)
    
solve()