s=input().strip()
result=0
current=0
for ch in s:
    target=ord(ch)-ord('a')
    diff=abs(target-current)
    result+=min(diff,26-diff)
    current=target
print(result)