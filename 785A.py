t=int(input())
sum=0
for _ in range(t):
    str=input()
    if str=="Tetrahedron":
        sum+=4
    elif str=="Cube":
        sum+=6
    elif str=="Octahedron":
        sum+=8
    elif str=="Dodecahedron":
        sum+=12
    elif str=="Icosahedron":
        sum+=20
print(sum) 