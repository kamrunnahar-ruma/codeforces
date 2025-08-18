t=int(input())
for i in range(t):
    n=int(input())
    s=input().strip()
    maxL=max(s)
    result=ord(maxL)-ord('a')+1
    print(result)