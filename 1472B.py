t=int(input())
for i in range(t):
    n=int(input())
    weight=list(map(int,input().split()))
    ones = weight.count(1)
    twos = weight.count(2)
    total=sum(weight)
    if(total%2!=0):
        print("NO")
    elif(total//2)%2 !=0 and ones==0:
        print("NO")
    else:
        print("YES")