n=int(input())
a=list(map(int,input().split()))
max_hight=max(a)
for i in range(n):
    if a[i]==max_hight:
        max_idx=i
        break
min_hight=min(a)
for i in range(n-1,-1,-1):
    if a[i]==min_hight:
        min_idx=i
        break
moves=max_idx+(n-1-min_idx)
if min_idx<max_idx:
    moves-=1
print(moves)