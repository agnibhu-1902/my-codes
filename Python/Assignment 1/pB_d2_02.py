n=int(input("Enter range : "))
l,flag=[],0
for i in range(n):
    l.append(int(input("Enter a number : ")))
n=int(input(("Enter number to search : ")))
l.sort()
lb,ub=0,len(l)-1
while lb<=ub:
    mid=int((lb+ub)/2)
    if n>l[mid]:
        lb=mid+1
    elif n<l[mid]:
        ub=mid-1
    else:
        print("Number found")
        flag=1
        break
if flag==0:
    print("Number not found")