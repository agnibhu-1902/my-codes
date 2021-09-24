x,y=int(input("Enter 2 numbers:\n")),int(input())
hcf=0
for i in range(1,x):
    if x%i==0 and y%i==0:
        hcf=i
if hcf==1:
    print("They are coprime numbers")
else:
    print("They are non-coprime numbers")