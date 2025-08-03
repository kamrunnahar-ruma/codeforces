t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    evencount=0
    oddcount=0
    for i in range(n):
        if a[i]%2==0:
            evencount+=a[i]
        else:
            oddcount+=a[i]
    if evencount>oddcount:
        print("Yes")
    else:
        print("NO")