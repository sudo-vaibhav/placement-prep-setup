t = int(input())
while t:
    t-=1
    n = int(input())
    l = map(int,input().split())
    oc,ec,oop=0,0,0

    for idx,i in enumerate(l):
        if i%2==0:
            ec+=1
        else:
            oc+=1
        if idx%2!=i%2:
            oop+=1
    if ec-oc==1 or ec-oc==0:
        print(oop//2)
    else:
        print(-1)
