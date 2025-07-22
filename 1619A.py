t=int(input())
for i in range(t):
    str=input()
    mid=len(str)//2
    if len(str)%2==0:
        if str[:mid]==str[mid:]:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")