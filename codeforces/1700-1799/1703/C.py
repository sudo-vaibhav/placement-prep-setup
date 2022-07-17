import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    final = list(map(int,input().split()))
    for wheel in range(n):
        opCount,ops = input().split()
        for op in ops:
            if op == "D":
                final[wheel]+=1
            else:
                final[wheel]-=1
            if final[wheel]==-1:
                final[wheel] = 9
            elif final[wheel]==10:
                final[wheel] = 0
    print(*final)



t = int(input())
while t:
    t-=1
    solve()