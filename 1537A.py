t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    sum=0
    for i in range(n):
        sum+=a[i]
    if sum<n:
        print(1)
    elif sum==n:
        print(0)
    else:
        print(sum-n)