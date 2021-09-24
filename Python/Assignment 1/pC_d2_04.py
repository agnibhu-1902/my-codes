n=int(input("Enter range : "))
def fibo(a,b,n):
    if n==1:
        return 0
    else:
        c=a+b
        a,b=b,c
        print(c,end=" ")
        return fibo(a,b,n-1)
a,b=0,1
print("Fibonacci series : ",a,b,end=" ")
fibo(a,b,n)