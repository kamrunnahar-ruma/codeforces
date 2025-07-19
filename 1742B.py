t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    iseqal=False
    for i in range(n-1):
        if arr[i]==arr[i+1]:
            iseqal=True
            break
    if(iseqal):
        print("NO")
    else:
        print("YES")