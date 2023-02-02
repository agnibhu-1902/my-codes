def isArmstrong(n):
    s, w = 0, n
    while w != 0:
        s += (w % 10) ** 3
        w //= 10
    if s == n:
        return True
    else:
        return False

n = int(input("Enter a number: "))
if isArmstrong(n):
    print("Armstrong number")
else:
    print("Not an Armstrong number")