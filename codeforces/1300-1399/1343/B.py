t = int(input())
while t:
    t-=1
    n = int(input())
    if (n/2)%2==1:
        print("NO")
    else:
        print("YES")
        s1 = 0
        for i in range(2,n+1,2):
            s1+=i
            print(i,end=" ")
        s=0
        for i in range(1,n-1,2):
            s+=i
            print(i,end=" ")
        print(s1-s)