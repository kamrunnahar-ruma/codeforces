t=int(input())
for i in range(t):
    n = input().strip()
    digit = int(n[0])
    length = len(n)
    totalP=10*(digit-1)+(length*(length+1))//2
    print(totalP)