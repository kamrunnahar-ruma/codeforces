t=int(input())
m={'p':'q','q':'p','w':'w'}
for i in range(t):
    a=input().strip()
    b=''.join(m[ch] for ch in reversed(a))
    print(b)