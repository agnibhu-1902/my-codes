# 7. Write a Python program to check if a set is a subset of another set.
print("Enter members of first set (Press q to quit) :")
s1 = set()
while True:
    n = input()
    if n == 'q':
        break
    else:
        s1.add(n)
print("The first set is :", s1)
print("Enter members of second set (Press q to quit) :")
s2 = set()
while True:
    n = input()
    if n == 'q':
        break
    else:
        s2.add(n)
print("The second set is :", s2)
if s1 <= s2:
    print("The first set is the subset of the second set.")
elif s1 >= s2:
    print("The second set is the subset of the first set.")
else:
    print("They are not subsets.")