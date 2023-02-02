def factorial(n):
    f = 1
    for i in range(1, n + 1):
        f *= i
    return f

def ncr(n, r):
    return factorial(n) // (factorial(r) * factorial(n - r))

h = int(input('Enter height: '))
for i in range(0, h + 1):
    print(' ' * (h - i), end = '')
    for j in range(0, i + 1):
        print(ncr(i, j), end = '  ')
    print()