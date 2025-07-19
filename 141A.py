s1 = input()
s2 = input()
s3 = input()
s = s1 + s2
if sorted(s) == sorted(s3):
    print("YES")
else:
    print("NO")