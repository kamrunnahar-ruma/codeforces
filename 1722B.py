t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    s1=input()
    isrecognized=True
    for i in range(n):
        if s[i] == s1[i]:
            continue
        elif (s[i] in 'GB' and s1[i] in 'GB'):
            continue
        else:
            isrecognized = False
            break
    if isrecognized:
        print("YES")
    else:
        print("NO")