import math


t = int(input())
def solve():
    n = int(input())
    nums = list(map(int,input().split()))
    nums.sort()

    if len(nums)==1:
        if nums[0]>1:
            print("NO")
            return 
    else:
        if abs(nums[-1]-nums[-2])>1:
            print("NO")
            return 
    print("YES")
while t:
    t-=1
    solve()