t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    total_sum = sum(arr)
    
    if total_sum % 2 == 1:
        print("NO")
    else:
        print("YES")
