t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    minside=min(a,b)
    maxside=max(a,b)
    side=max(maxside,2*minside)
    result=side*side
    print(result)