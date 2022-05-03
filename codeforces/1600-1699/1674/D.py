from math import inf
import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)

# prev,prevprev = inf,inf
#         for i in range(n-1,-1,-1):
#             if i==n-1:
#                 prevprev = a[i]
#             elif i==n-2:
#                 prev = a[i]
#             else:
#                 cur = a[i]
#                 if not(cur<=prev or cur<=prevprev):
#                     print("NO")
#                     return
#                 prevprev = prev
#                 prev = cur
#         print("YES")

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    if n<=2:
        print("YES")
    else:
        duplets = []
        for i in range(n-1,-1,-2):
            if i>0:
                duplets.append([a[i],a[i-1]])
            else:
                duplets.append([a[i]])
        duplets[:] = duplets[::-1]
        dbg(duplets)
        
        for i in range(1,len(duplets)):
            if min(duplets[i])<max(duplets[i-1]):
                print("NO")
                return
        print("YES")
t = int(input())
while t:
    t-=1
    solve()