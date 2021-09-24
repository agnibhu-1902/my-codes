n=int(input("Enter range : "))
x,q,sum=2,1,0
print("Prime numbers : ",end="")
while q<=n:
    c=0
    for i in range(1,x+1):
        if x%i==0:
            c+=1
    if c==2:
        print(x,end=" ")
        q+=1
        sum+=x
    x+=1
print("\nSum :",sum)