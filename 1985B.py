t=int(input())
for i in range(t):
    n=int(input())
    evnsum=0
    oddsum=0
    for i in range(2,n+1):
        if(i%2==0):
            evnsum+=i
        elif(i%3==0):
            oddsum+=i
    if(evnsum>oddsum):
        print(2)
    else:
        print(3)