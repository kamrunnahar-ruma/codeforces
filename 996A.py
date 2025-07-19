def min_bill(n):
    count=0
    for bill in [100,20,10,5,1]:
        count+=n//bill
        n%=bill
    return count
n=int(input())
print(min_bill(n))