n = int(input())
a = list(map(int, input().split()))

max_len = 1
curr_len = 1

for i in range(1, n):
    if a[i] >= a[i - 1]:
        curr_len += 1
        max_len = max(max_len, curr_len)
    else:
        curr_len = 1

print(max_len)
