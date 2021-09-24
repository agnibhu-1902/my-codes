n=int(input("Enter range : "))
l=[]
for i in range(n):
    l.append(int(input("Enter a number : ")))
max,p=0,0
for i in l:
    if i>max:
        max=i
        p=l.index(i)+1
print("Biggest number :",max)
print("Position :",p)