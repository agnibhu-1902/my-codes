# Read the two strings from the user
str1 = input("Enter a string: ")
str2 = input("Enter another string: ")

# Reverse the first string using slicing
reversed_str1 = str1[::-1]

# Convert the second string to upper case
upper_str2 = str2.upper()

# Concatenate the reversed first string and the upper case second string using the + operator
result = reversed_str1 + " " + upper_str2

# Print the result
print(result)

