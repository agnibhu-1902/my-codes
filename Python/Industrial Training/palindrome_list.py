# Write a program to check whether a list is palindrome or not.
l = []
n = int(input("Enter the range of the list : "))
for i in range(n):
    tmp = int(input("Enter value at index {} : ".format(i + 1)))
    l.append(tmp)
s, count = 0, 0
for number in l:
    n = abs(number)
    while n != 0:
        s = s * 10 + n % 10
        n //= 10
    if s == number:
        count += 1
    s = 0
if count == len(l):
    print("List {} is palindrome".format(l))
else:
        print("List {} is not palindrome".format(l))