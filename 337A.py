n,m=map(int,input().split())
puzzel=list(map(int,input().split()))
puzzel.sort()
mini=float('inf')
for i in range(m-n+1):
    currenti=puzzel[i+n-1]-puzzel[i]
    mini=min(mini,currenti)
print(mini)