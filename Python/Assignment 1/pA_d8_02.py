def fact(n):
    f=1
    for i in range(1,n+1):
        f*=i
    return f
n=int(input("Enter value of n : "))
r=int(input("Enter the value of r : "))
c=int(fact(n)/(fact(r)*fact(n-r)))
print("nCr :",c)