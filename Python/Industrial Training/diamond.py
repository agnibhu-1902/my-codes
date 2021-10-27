n = int(input("Enter height : "))
if n > 0 and not n % 2 == 0:
    n = (n + 1) // 2
    for i in range(n - 1):
        for j in range(n - i):
            print(' ', end='')
        for j in range(i + 1):
            print("* ", end='')
        print()
    for i in range(n):
        for j in range(i + 1):
            print(' ', end='')
        for j in range(n - i):
            print("* ", end='')
        print()
else:
    print("Cannot print a diamond using this value")