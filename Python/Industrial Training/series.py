print("Menu")
print("1. 1! + 2! + 3! + ... + n!")
print("2. 1 + x + x^2 + x^3 + x^4 + ... + x^n")
print("3. 1 + 3 + 5 + 7 + 9 + ... + n")
ch = int(input("\nEnter choice : "))
if ch < 1 or ch > 3:
    print("\nInvalid choice")
else:
    n = int(input("\nEnter the value of 'n' : "))
    if ch == 1:
        fact, sum = 1, 0
        for i in range(1, n + 1):
            for j in range(1, i + 1):
                fact *= j
            sum += fact
            fact = 1
        print("\nResult :", sum)
    elif ch == 2:
        x = int(input("Enter the value of 'x' : "))
        sum = 0
        for i in range(n):
            sum += x ** i
        print("\nResult :", sum)
    elif ch == 3:
        sum = 0
        for i in range(1, n + 1, 2):
            sum += i
        print("\nResult :", sum)