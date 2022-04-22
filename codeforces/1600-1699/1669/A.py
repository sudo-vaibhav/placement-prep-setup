import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    rating = int(input())
    print("Division ",end="")
    if(1900<=rating):
        print(1)
    elif(1600<=rating<=1899):
        print(2)
    elif(1400<=rating<=1599):
        print(3)
    else:
        print(4)

t = int(input())
while t:
    t-=1
    solve()