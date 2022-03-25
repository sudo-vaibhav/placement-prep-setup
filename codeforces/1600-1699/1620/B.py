t = int(input())
while t:
    t-=1
    w,h = map(int,input().split())
    bx,tx,ly,ry = map(lambda x:sorted(list(map(int,x.split()))[1:]),[input() for i in range(4)])

    print(max([
        h*max(bx[-1]-bx[0],tx[-1]-tx[0]),
        w*max(ly[-1]-ly[0],ry[-1]-ry[0])
    ]))