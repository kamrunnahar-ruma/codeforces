t=int(input())
for i in range(t):
    x,y,n=map(int,input().split())
    k=(n-y)//x*x+y
    print(k)