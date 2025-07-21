t=int(input())
for i in range(t):
    n=int(input())
    c2=n//3
    c1=n-c2*2
    if abs(c1-c2)>abs((n - 2 * (c2 + 1)) - (c2 + 1)):
        c2+=1
        c1=n-2*c2
    print(c1,c2)