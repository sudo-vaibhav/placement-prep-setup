



from collections import Counter


t = int(input())
while t:
    t-=1
    n = int(input())
    l = Counter(map(int,input().split()))
    if 1 in l:
        for i in l.keys():
            if i-1 in l:
                print("NO")
                break
        else:
            print("YES")
    else:
        print("YES")