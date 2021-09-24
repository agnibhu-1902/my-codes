n=int(input("Enter range : "))
a,b=0,1
print("Fibonacci series :",a,b,end=" ")
for i in range(n-2):
    c=a+b
    print(c,end=" ")
    a,b=b,c
print("\nLast fibonacci number :",c)