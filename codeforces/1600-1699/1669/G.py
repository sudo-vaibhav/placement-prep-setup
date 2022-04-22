# from distutils.dir_util import copy_tree
import sys
def dbg(*args, **kwargs):
    # return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n,m = map(int,input().split())
    a = []
    for i in range(n):
        temp = list(input())
        a.append(temp)
    dbg(a)
    
    for col in range(m):
        for row in range(n-1,-1,-1):
            if a[row][col]!=".":
                continue
            for back in range(row-1,-1,-1):
                if a[back][col]=="o":
                    break
                if a[back][col]=="*":
                    a[back][col],a[row][col] = a[row][col],a[back][col]
                    break
    for row in a:
        for col in row:
            print(col,end="")
        print()
                    
            
t = int(input())
while t:
    t-=1
    solve()