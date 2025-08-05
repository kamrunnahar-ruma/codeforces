t=int(input())
for i in range(t):
    n,x=map(int,input().split())
    if n<2:
        print(1)
    else:
        floor=1+(n-2 + x-1)//x
        print(floor)