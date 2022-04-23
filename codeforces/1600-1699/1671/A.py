from collections import Counter
import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)


def solve():
    s = input()
    if len(s)==1:
        print("NO")
    else:
        # ct = Counter(s)
        a = list(filter(lambda x:x!="",s.split("b")))
        b = list(filter(lambda x:x!="", s.split("a")))
        if "a" in a or "b" in b:
            print("NO")
        else:
            print("YES")
t = int(input())
while t:
    t-=1
    solve()