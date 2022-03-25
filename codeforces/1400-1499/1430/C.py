# from itertools import permutations
from math import ceil
# from pprint import pprint


t = int(input())
while t:
    t-=1
    N = int(input())
    n = N
    prev = n
    print(2)
    for i in range(N-1,0,-1):
        print(prev, i)
        prev = ceil((prev+i)/2)
