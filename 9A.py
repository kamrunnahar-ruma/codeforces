from math import gcd
y,w=map(int,input().split())
max_value=max(y,w)
p=6-max_value+1
d=6
g = gcd(p, d)
print(f"{p//g}/{d//g}")