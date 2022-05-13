import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    s = list(input())
    n = len(s)
    yes,no,dn= "1","0","?"
    
    seenNoBefore = []
    seenYesAfter = [False for i in range(n)]
    prev = False
    for i in range(n):
        seenNoBefore.append(prev)
        prev = prev or s[i]==no
    prev =  False
    for i in range(n-1,-1,-1):
        if prev:
            seenYesAfter[i] = True
        prev = prev or s[i]==yes
        
    if n==1:
        print(1)
    else:
        # if s[-1]==yes or s[0]==no:
        #     print(1)
        #     return
        ct = 0
        for i in range(n):
            if not seenNoBefore[i] and not seenYesAfter[i]:
                ct+=1
          
        print(ct)
    
t = int(input())
while t:
    t-=1
    solve()