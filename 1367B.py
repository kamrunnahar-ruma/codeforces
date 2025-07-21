t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    even=0
    odd=0
    for i in range(n):
        if(i%2!=arr[i]%2 ):
            if i%2==0:
                even+=1
            else:
                odd+=1
    if(even==0 and odd==0):
        print(0)
    elif(even==odd):
        print(even)
    else:
        print(-1)