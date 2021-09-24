import math
n=int(input("Enter a number : "))
w,s=n,0
while w!=0:
    s+=math.pow(int(w%10),3)
    w=int(w/10)
if s==n:
    print("It's an Armstrong number")
else:
    print("It's not an Armstrong number")