def add(a, b):
    return a + b

def sub(a, b):
    return a - b

def mul(a, b):
    return a * b

def div(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        return 'Cannot divide by zero!'

a = int(input('Enter a number: '))
b = int(input('Enter another number: '))

print('\n===== MENU =====')
print('1. Addition')
print('2. Subtraction')
print('3. Multiplication')
print('4. Division')
ch = int(input('\nEnter choice: '))

print('Result = ', end = '')
if ch == 1:
    print(add(a, b))
elif ch == 2:
    print(sub(a, b))
elif ch == 3:
    print(mul(a, b))
elif ch == 4:
    print(div(a, b))
else:
    print('Wrong choice!')