t = int(input())
def solve():
    a,b = map(int,input().split())
    if a==0:
        print(1)
    else:
        print(a+b*2+1)
while t:
    t-=1
    solve()