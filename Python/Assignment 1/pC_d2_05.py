a,b=int(input("Enter 2 numbers:\n")),int(input())
def gcd(a,b,n):
    if n==1:
        return 1
    elif a%n==0 and b%n==0:
        return n
    else:
        return gcd(a,b,n-1)
print("GCD :",gcd(a,b,a))