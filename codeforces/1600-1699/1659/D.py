import os
def solve():
    n = int(input())
    c = list(map(int,input().split()))
    know = 0
    a = [1 for i in range(n+1)]
    
    if c[0]==0:
        a[0]=0
    else:
        a[0]=1
    i = 0
    while i<n and know<n:
        if know<i:
            if c[i]==0:
                a[i]=0
            else:
                a[i]=1
            know = i
        if a[i]==1:
            val = min(n,c[i])
            a[val] = 0
            know = max(know,val)
        else:
            val = min(n,i+c[i])
            a[val]=0
            know = max(val,know)
        i+=1
            
        
    print(" ".join(map(str,a[:-1])))
    
t = int(input())
while t:
    t-=1
    solve()