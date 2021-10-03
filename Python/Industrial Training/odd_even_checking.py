# Write a python script to check whether a number is odd or even
n = int(input("Enter a number : "))
print("The number {0} is even".format(n)) if n % 2 == 0 else print("The number {0} is odd".format(n))