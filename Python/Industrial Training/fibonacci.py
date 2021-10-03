# Fibonacci series
n = int(input("Enter range : "))
if n > 0:
    a, b = 0, 1
    if n == 1:
        print(a,end=' ')
    if n >= 2:
        print(a,b,end=' ')
    for i in range(3,n+1):
        c = a + b
        print(c,end=' ')
        a = b
        b = c
else:
    print("Invalid input")