n=int(input("Enter a number : "))
sum=0
for i in range(1,n):
    if n%i==0:
        sum+=i
if sum==n:
    print("It's a perfect number")
else:
    print("It's not a perfect number")