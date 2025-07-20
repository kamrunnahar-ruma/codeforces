t = int(input())
for _ in range(t):
    word = ""
    for i in range(8):
        line = input()
        for ch in line:
            if ch != '.':
                word += ch
    print(word)
