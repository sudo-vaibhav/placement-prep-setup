from collections import Counter


t = int(input())
while t:
    t-=1
    n,k = map(int,input().split())
    l = map(int,input().split())
    ct= Counter(l)
    # print(ct.keys())
    for i in ct.keys():
        ct[i]-=1
        if k+i in ct.keys() and ct[k+i]>0:
            # print(i,k-i)
            print("YES")
            break 
        ct[i]+=1
    else:
        print("NO")