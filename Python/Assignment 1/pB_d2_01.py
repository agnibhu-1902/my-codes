n=int(input("Enter range : "))
l,flag=[],0
for i in range(n):
    l.append(int(input("Enter a number : ")))
n=int(input(("Enter number to search : ")))
for i in l:
    if n==i:
        print("Number present")
        flag=1
        break
if flag==0:
    print("Number absent")