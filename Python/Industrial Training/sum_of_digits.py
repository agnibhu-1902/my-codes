w = input("Enter a number : ")
s, n = 0, abs(int(w))
for i in range(len(w)):
    s += int(n % 10)
    n //= 10
print("Sum of the digits : ", s)