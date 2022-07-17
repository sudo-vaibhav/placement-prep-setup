from copy import deepcopy
import sys
import os
from typing import Counter
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('placement-prep-setup' not in working_directory):
        return
    # print(*args, file=sys.stderr, **kwargs)

def rotate(arr,N):
    arr = deepcopy(arr)
 
    # First rotation
# with respect to main diagonal
    for i in range(N):
        for j in range(i):
            temp = arr[i][j]
            arr[i][j] = arr[j][i]
            arr[j][i] = temp
 
    # Second rotation
# with respect to middle column
    for i in range(N):
        for j in range(int(N/2)):
            temp = arr[i][j]
            arr[i][j] = arr[i][N-j-1]
            arr[i][N-j-1] = temp
    return arr

def solve():
    n = int(input())
    a = []
    for i in range(n):
        a.append(list(map(int,list(input()))))
    dbg(a)
    prev = a
    temp = [a]
    for i in range(3):
        temp.append(rotate(prev,n))
        prev = temp[-1]
    # print(temp)
    ans = 0
    rowLim = n//2 if n%2==0 else n//2+1
    for i in range(rowLim):
        for j in range(n//2):
            zc = 0
            for cand in temp:
                if cand[i][j]==0:
                    zc+=1
            ans += 4-max(zc,4-zc)
    
    # mid = n//2
    # ans = 0
    # for i in range(mid):
    #     for j in range(mid):
    #         r = i,n-1-j
    #         b = n-1-i,j
    #         br = n-1-i,n-1-j

    #         ctr = Counter([a[r[0]][r[1]],
    #             a[b[0]][b[1]],
    #             a[br[0]][br[1]],
    #             a[i][j]
    #         ])

    #         v = max(ctr.values())
    #         ans += 4-v

    # if n%2==1 and n>1:
    #     constant = n//2
    #     for var in range(n//2):
    #         ctr = Counter([
    #             a[constant][var],
    #             a[constant][n-1-var],
    #             a[var][constant],
    #             a[n-1-var][constant]
    #         ])

    #         v = max(ctr.values())
    #         # dbg(i,j,v)
    #         ans += 4-v


    print(ans)
    # dbg(a)
t = int(input())
while t:
    t-=1
    solve()