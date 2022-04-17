import os
def solve():
    n,k = map(int,input().split())
    K = k
    x = list(map(int,list(input())))
    orig = x[-1]
    ans = [0 for i in range(n)]
    i=0
    while i<n:
        if k>0 and ((x[i]==1 and K%2==1) or (x[i]==0 and K%2==0)):
            ans[i]+=1
            k-=1
            x[i]=1
        else:
            # no need to save
            if K%2==1:
                x[i]=1-x[i]
        i+=1
    if k>0:
        x[n-1] = orig
        ans[n-1] += k
        leftOver = K-ans[n-1]
        if leftOver%2==0:
            pass
        else:
            x[n-1]=1-x[n-1]
    print("".join(map(str,x)))
    print(" ".join(map(str,ans)))
            
        
        
        
    
t = int(input())
while t:
    t-=1
    solve()