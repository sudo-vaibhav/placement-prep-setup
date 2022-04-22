import sys
def dbg(*args, **kwargs):
    return
    print(*args, file=sys.stderr, **kwargs)

# def canEat(amt,arr):
#     cnt = 0
#     eaten = 0
#     i = 0
#     while eaten<amt and i<len(arr):
#         eaten+= arr[i]
#         i+=1
#         cnt+=1
#     if eaten!=amt:
#         return False
#     return cnt

# while mi<=ma:
    #     guess = mi + (ma-mi)//2
    #     x = canEat(guess,a)
    #     y = canEat(guess,backA)
        
    #     dbg(guess,x,y)
    #     if x!=False and y!=False and (x+y)<=n:
    #         ans = max(ans,guess)
    #         mi = guess+1
    #     else:
    #         ma = guess-1
    
def solve():
    n = int(input())
    a = list(map(int,input().split()))
    mi = 0
    ma = sum(a)
    backA = a[::-1]
    ans = 0
    alice = [0]
    bob = [0]
    for i in a:
        alice.append(alice[-1]+i)
    sa = set(alice)
    for i in backA:
        bob.append(bob[-1]+i)
    sb = set(bob)
    temp = sa.intersection(sb)
    dbg("temp",temp)
    alice = {alice[i]:i for i in range(n+1)}
    bob = {bob[i]:i for i in range(n+1)}
    for elem in temp:
        v = alice[elem]+bob[elem]
        if v<=n:
            ans = max(ans,v)
    
    dbg(a)
    dbg(alice)
    dbg(bob)
    print(ans)

t = int(input())
while t:
    t-=1
    solve()