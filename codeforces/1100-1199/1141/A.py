import os
def solve():
    n,m =map(int,input().split())
    steps= 0
    X = m/n
    while X!=1:
        if X%3==0:
            X/=3
            steps+=1
        elif X%2==0:
            X/=2
            steps+=1
        else:
            # print("problem",)
            print(-1)
            return
    print(steps)
if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    for i in range(3):
        solve()
        