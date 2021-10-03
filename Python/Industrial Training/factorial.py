# Calculate the factorial of a number given by the user
n = int(input("Enter a number : "))
fact = 1
if n >= 0:
    for i in range(1,n+1):
        fact *= i
    print("The factorial of {0} is {1}".format(n,fact))
else:
    print("Invalid input")