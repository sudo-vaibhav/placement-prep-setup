from collections import Counter
def solve():
    n = int(input())
    v = list(map(int,input().split()))
    ct = Counter(v)
    b = max(ct.values())
    
    # for k in ct:
    #     if ct[k]==b:
    #         h=
    #         break
    h=b
    if h==n:
        print(0)
    else:
        ac = h
        steps = 0
        # print(ac,h)
        while ac<n:
            steps+=1
            steps+=min(max(0,n-ac),ac)
            ac+=ac
        print(steps)

t = int(input())
while t:
    t-=1
    solve()