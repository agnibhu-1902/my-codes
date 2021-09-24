n=int(input("Enter a number : "))
s=0
while n!=0:
    s=s*10+int(n%10)
    n=int(n/10)
print("Reversed number :",s)