# Create a list of numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Use list comprehension to find the odd numbers and numbers divisible by 3
odd_numbers = [x for x in numbers if x % 2 == 1]
divisible_by_3 = [x for x in numbers if x % 3 == 0]

print("Odd numbers:", odd_numbers)  # [1, 3, 5, 7, 9]
print("Numbers divisible by 3:", divisible_by_3)  # [3, 6, 9]
