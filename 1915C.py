import math
t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    asum=sum(a)
    if math.sqrt(asum).is_integer():
        print("YES")
    else:
        print("NO")