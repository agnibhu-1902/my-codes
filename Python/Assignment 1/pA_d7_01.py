n=int(input("Enter range : "))
x,q,a,b=2,2,0,1
print("Series : ",b,end=" ")
while q<=n:
    if q%2==0:
        c=0
        for i in range(1,x+1):
            if x%i==0:
                c+=1
        if c==2:
            print(x,end=" ")
            q+=1
        x+=1
    else:
            c=a+b
            print(c,end=" ")
            a,b=b,c
            q+=1