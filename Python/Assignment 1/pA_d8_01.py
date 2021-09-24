n=int(input("Enter range : "))
a,b,l=0,1,[0,1]
print("Non-Fibonacci series :",end=" ")
for i in range(0,n-1):
    c=a+b
    l.append(c)
    a,b=b,c
for i in range(1,n+1):
    flag=0
    for j in l:
        if i==j:
            flag=1
    if flag:
        continue
    print(i,end=" ")