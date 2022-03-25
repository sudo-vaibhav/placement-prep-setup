from math import floor, log2
t = int(input())
while t:
    t-=1
    n = int(input())
    if n%2==1:
        print(2)
    else:
        m=1
        while n%2==0:
            n//=2
            m*=2
        if n==1:
            print(-1)
        else:
            print(int(min(2*m,n)))
        