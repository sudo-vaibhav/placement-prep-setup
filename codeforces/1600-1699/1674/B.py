import sys
import os
working_directory = os.getcwd()
def dbg(*args, **kwargs):
    if('Vaibhav' not in working_directory):
        return
    print(*args, file=sys.stderr, **kwargs)

order = {}
alphas = range(ord('a'),ord('z')+1)
ctr = 1
for i in alphas:
    bef = chr(i)
    for j in alphas:
        af = chr(j)
        if bef!=af:
            order[bef+af] = ctr
            ctr+=1
            
    

def solve():
    qry = input()
    print(order[qry])
t = int(input())
while t:
    t-=1
    solve()