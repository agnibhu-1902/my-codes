n=int(input("Enter units : "))
if n<=100:
    bill=100
elif n<=150:
    bill=100+(n-100)
elif n<=200:
    bill=100+50+(n-150)*2
else:
    bill=100+50+(50*2)+(n-200)*3
print("Bill amount :",bill)