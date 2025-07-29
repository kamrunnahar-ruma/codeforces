t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    high_val=max(arr)
    low_val=min(arr)
    result=high_val-low_val
    print(result)