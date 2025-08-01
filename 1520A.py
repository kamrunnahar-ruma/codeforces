t=int(input())
for i in range(t):
    n = int(input())
    s=input()
    seen = set()
    prev = ''
    is_valid = True
    for ch in s:
        if ch != prev:
            if ch in seen:
                is_valid = False
                break
            seen.add(ch)
        prev = ch
    if is_valid:
        print("YES")
    else:
        print("NO")