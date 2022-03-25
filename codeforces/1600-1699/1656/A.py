t = int(input())
while t:
    t-=1
    n= input()
    l = list(map(int,input().split()))
    # print(l)
    ma,mi = max(l),min(l)
    print(l.index(mi)+1,l.index(ma)+1)