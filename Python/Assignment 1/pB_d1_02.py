n=int(input("Enter range : "))
l,sum=[],0
for i in range(1,n+1):
    l.append(int(input("Enter a number : ")))
for i in l:
    sum+=i
print("Sum :",sum)