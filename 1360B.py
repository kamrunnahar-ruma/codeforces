t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    minvalue=a[1]-a[0]
    for i in range(1,n-1):
        min1=a[i+1]-a[i]
        if min1<minvalue:
            minvalue=min1
    print(minvalue)