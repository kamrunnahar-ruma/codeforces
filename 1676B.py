t= int(input())
for i in range(t):
    n=int(input())
    candies=list(map(int,input().split()))
    min_candies= min(candies)
    sum_candies=0
    for i in range(n):
        sum_candies+=candies[i]-min_candies
    print(sum_candies)