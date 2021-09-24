def isPrime(n):
    c=0
    for i in range(1,n+1):
        if n%i==0:
            c+=1
    if c==2:
        return True
    else:
        return False
n=int(input("Enter a number : "))
if isPrime(n):
    print("It's a prime number")
else:
    print("It's not a prime number")