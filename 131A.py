s=input()
if s.isupper() or (len(s)>1 and s[0].islower() and s[1:].isupper() or (len(s)==1 and s.islower())):
    print(s.swapcase())
else:
    print(s)