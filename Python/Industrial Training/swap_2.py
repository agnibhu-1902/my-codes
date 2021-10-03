a = int(input("Enter first value : "))
b = int(input("Enter second value : "))
print("Original value is {0} and {1}".format(a,b))
a = a + b
b = a - b
a = a - b
print("Swapped value is {0} and {1}".format(a,b))