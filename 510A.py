m,n=map(int,input().split())
for i in range(1,n+1):
    if(i%2==1):
        print('#'*m)
    elif(i%4==0):
        print('#'+'.'*(m-1))
    else:
        print('.'*(m-1)+'#')
    
        