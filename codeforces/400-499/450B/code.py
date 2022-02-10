x,y=map(int, input().split())
n = int(input())
MOD =1000000007 
# print(x,y,n)
a = [x,y,0,0,0,0]
for i in range(2,6):
    a[i] = a[i-1]-a[i-2]
ans = (a[(n % 6) - 1]) % MOD
if (ans >= 0):
    print(ans)
else:
    print(MOD + ans)
