a = int(input("Enter first value : "))
b = int(input("Enter second value : "))
print("Original value is {0} and {1}".format(a,b))
temp = a
a = b
b = temp
print("Swapped value is {0} and {1}".format(a,b))