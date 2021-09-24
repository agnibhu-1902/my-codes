def bino(n,k):
    res=1
    if k>n-k:
        k=n-k
    for i in range(k):
        res*=n-i
        res=int(res/(i+1))
    return res
n=int(input("Enter height : "))
for i in range(n):
    for j in range(i+1,n):
        print(" ",end=" ")
    for j in range(0,i+1):
        print(" ",bino(i,j),end=" ")
    print()