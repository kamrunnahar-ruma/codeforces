t=int(input())
for i in range(t):
    s=input().strip()
    digit=[int(d) for d in s]
    print(min(digit))