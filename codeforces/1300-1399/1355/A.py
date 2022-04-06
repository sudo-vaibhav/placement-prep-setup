from math import inf


def solve():
    a,K = map(int,input().split())
    prev = -1
    for i in range (1,K):
        # if prev == inf:
        #     print(a)
        # print(a)
        x = list(map(int,list(str(a))))
        # print(x)
        a+=min(x)*max(x)
        if prev==a:
            break
        else:
            prev = a
    print(a)
t = int(input())
while t:
    t-=1
    solve()