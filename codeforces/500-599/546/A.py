k,n,w = map(int,input().split())
m = 0
for i in range(1,w+1):
    m+= k*i
print(max(0,m-n))