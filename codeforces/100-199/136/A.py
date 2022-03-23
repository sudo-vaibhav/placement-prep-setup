n = int(input())
l = list(map(int,input().split(" ")))
ans = [0 for _ in range(n+1)]
for idx,i in enumerate(l):
    ans[i]=idx+1
for i in range(1,len(ans)):
    print(ans[i],end=" ")
