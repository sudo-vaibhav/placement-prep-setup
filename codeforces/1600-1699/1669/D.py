from collections import Counter
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)

# f = 0
def solve():
    # global f
    n = int(input())
    s = input()
    # ct = Counter(s)
    parts = filter(lambda x:x!="",s.split("W"))
    for part in parts:
        ct = Counter(part)
        if (("B" in ct) ^ ("R" in ct)):
            print("NO")
            break
            # return
    else:
        print("YES") 
   
    # dbg(s,chk[f],ct)
    # f+=1
    
 # if (("B" in ct) ^ ("R" in ct)):
    #     print("NO")
    # elif "WBW" in s or "WRW" in s:
    #     print("NO")
    # # elif "RRR" in s or "BBB" in s:
    # #     print("NO")
    # else:
    #     print("YES") 
t = int(input())
while t:
    t-=1
    solve()