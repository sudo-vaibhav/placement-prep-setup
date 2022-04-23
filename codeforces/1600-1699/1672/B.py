import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    s = input()
    if ("B" not in s) or (len(s)<2) or (s.count("A")<s.count("B")) or (s[-1]!="B"):
        print("NO")
        return
    # if ("B" not in s) or len(s)<2:
    #     print("NO")
    #     return
    # S = s.split("B")
    # # if "".count
    # dbg(S)
    # for i in range(len(s)):
    #     if i==0:
    #         if s[i]=="B":
    #             print("NO")
    #             return
    #     else:
    #         if s[i]=="B" and s[i-1]=="B":
    #             print("NO")
    #             return
    
    ac,bc = 0,0
    for i in range(len(s)):
        if s[i]=="A":
            ac+=1
        else:
            bc+=1
        if ac<bc:
            print("NO")
            return
    
    print("YES")
            
            
t = int(input())
while t:
    t-=1
    solve()