n = int(input("Enter a number : "))
print("Factors :")
if n > 0:
    for i in range(1, n + 1):
        if(n % i == 0):
            print(i)
elif n < 0:
    for i in range(-1, n - 1, -1):
        if(n % i == 0):
            print(i)
else:
    print(0)