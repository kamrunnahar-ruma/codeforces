t=int(input())
for i in range(t):
    words=input()
    wword1=words.split()
    first_letters = ''.join(word[0] for word in wword1)
    print(first_letters)
