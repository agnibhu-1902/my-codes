# Read the two numbers from the user
num1 = int(input("Enter a number: "))
num2 = int(input("Enter another number: "))

# Calculate the sum, product, and difference
sum = num1 + num2
product = num1 * num2
difference = num1 - num2

# Initialize the GCD to the smaller of the two numbers
gcd_val = min(num1, num2)

# Iterate from the smaller of the two numbers down to 1, and check if both numbers are divisible by the current number
while gcd_val > 1:
    if num1 % gcd_val == 0 and num2 % gcd_val == 0:
        # If both numbers are divisible by the current number, it is the GCD
        break
    else:
        # If the current number is not the GCD, decrement it by 1 and try again
        gcd_val -= 1

# Print the results
print("The sum is", sum)
print("The product is", product)
print("The difference is", difference)
print("The GCD is", gcd_val)
