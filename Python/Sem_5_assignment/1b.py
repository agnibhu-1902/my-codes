import math

# Take input for the values of a and b
a = int(input("Enter a value for a: "))
b = int(input("Enter a value for b: "))

# Find the greatest common divisor of a and b
gcd = math.gcd(a, b)
print(f"GCD of {a} and {b} is {gcd}")

# Calculate the area and perimeter of a circle with radius r
r = 2
area = math.pi * r**2
perimeter = 2 * math.pi * r
print(f"Area of a circle with radius {r} is {area}")
print(f"Perimeter of a circle with radius {r} is {perimeter}")

# Calculate the sine, cosine, and tangent of x (x is in radians)
x = math.pi / 4
sin_x = math.sin(x)
cos_x = math.cos(x)
tan_x = math.tan(x)
print(f"Sine of {x} is {sin_x}")
print(f"Cosine of {x} is {cos_x}")
print(f"Tangent of {x} is {tan_x}")

# Calculate the square root of a number
x = 4
sqrt_x = math.sqrt(x)
print(f"Square root of {x} is {sqrt_x}")

# Calculate the floor of a number (round down to the nearest integer)
x = 3.7
floor_x = math.floor(x)
print(f"Floor of {x} is {floor_x}")

# Calculate the ceiling of a number (round up to the nearest integer)
x = 3.7
ceil_x = math.ceil(x)
print(f"Ceiling of {x} is {ceil_x}")
