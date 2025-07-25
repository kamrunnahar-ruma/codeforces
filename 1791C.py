t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    while len(s) >= 2 and s[0] != s[-1]:
        s = s[1:-1]
    print(len(s))