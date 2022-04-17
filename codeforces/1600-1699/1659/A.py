import os
def solve():
    n,r,b = map(int,input().split())
    
    low,high = 1,n
    ans = "A"*n
    
    def isPos(val):
        ans = ""
        R,B = r,b
        while B>0 and R>0:
            ans+= "R"*min(R,val)
            R-=min(R,val)
            ans+= "B"
            B-=1
        if R>val:
            return False
        ans = ans + "R"*R
        finalans = ""
        for i in range(len(ans)):
            finalans+=ans[i]
            if  ans[i]=="R" and (i==len(ans)-1 or ans[i+1]=="R") and B>0:
                finalans+="B"*min(B,val)
                B-=min(B,val)
        return finalans
        
                
    guess = 0
    while low<=high:
        guess = low + (high-low)//2
        t = isPos(guess)
        if t!=False:
            ans = t
            high = guess - 1
        else:
            low = guess+1
    # print(guess)
    print(ans)
            
            
    
t = int(input())
while t:
    t-=1
    solve()