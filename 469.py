n=int(input())
x=list(map(int,input().split()))
xcount=x[1:]
y=list(map(int,input().split()))
ycount=y[1:]
combinexy=set(xcount+ycount)
if len(combinexy)==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")