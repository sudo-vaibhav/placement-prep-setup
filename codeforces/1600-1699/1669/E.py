from collections import defaultdict
from email.policy import default
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    n = int(input())
    cnt = defaultdict(int)
    beg = defaultdict(list)
    end = defaultdict(list)
    ans = 0
    for i in range(n):
        s = input()
        be,en = list(s)
        
        ans += len(beg[be])-cnt[s]
        ans += len(end[en])-cnt[s]
        
        beg[be].append(s)
        end[en].append(s)
        cnt[s]+=1
    print(ans)
        
t = int(input())
while t:
    t-=1
    solve()