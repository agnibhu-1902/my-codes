def fact(n):
    f=1
    for i in range(1,n+1):
        f*=i
    return f
n=int(input("Enter a number : "))
w,s=n,0
while w!=0:
    s+=fact(int(w%10))
    w=int(w/10)
if s==n:
    print("Krishnamurthy number")
else:
    print("Not a Krishnamurthy number")