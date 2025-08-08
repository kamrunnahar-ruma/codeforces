t=int(input())
for i in range(t):
    a,b,c=map(int,input().split())
    anaT=(c+1)//2
    kateT=c//2
    ana_turn=a+anaT
    kate_turn=b+kateT
    if ana_turn>kate_turn:
        print("Frist")
    else:
        print("Second")