from collections import defaultdict
import os

adj = defaultdict(list)
weights = {}
def dfs(cur,prev,curCol):
    if curCol==1:
        weights[cur] = len(adj[cur])
    else:
        weights[cur] = -len(adj[cur])
    for v in adj[cur]:
        if v != prev:
            dfs(v,cur,-curCol)

def solve():
    t = int(input())
    while t:
        t-=1
        global weights 
        weights= {}
        n = int(input())
        global adj
        adj = defaultdict(list)
        for _ in range(n-1):
            u,v = map(int,input().split())
            adj[u].append(v)
            adj[v].append(u)
        # print(adj)
        dfs(1,-1,1)
        # print(weights)
        for i in range(1,n+1):
            print(weights[i],end=" ")
        print()

if 'APPDATA' in os.environ.keys() and 'codeforces' in os.environ.get('APPDATA'):
    solve()
else:
    t = 1
    while t:
        t-=1
        solve()