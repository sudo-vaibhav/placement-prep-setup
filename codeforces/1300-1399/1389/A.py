t= int(input())
while t:
    t-=1
    l,r = map(int,input().split())
    if l*2>r:
        print("-1 -1")
    else:
        print(l,2*l)