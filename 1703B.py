t=int(input())
for i in range(t):
    n=int(input())
    s=input().strip()
    solve=set()
    ballon=0
    for ch in s:
        if ch not in solve:
            ballon+=2
            solve.add(ch)
        else:
            ballon+=1
    print(ballon)