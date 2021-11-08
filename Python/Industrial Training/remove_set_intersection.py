# 8. Write a Python program to remove the intersection of a 2nd set from the 1st set.
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
s1 = s1 - s2
print("The sets after removing intersection are :")
print("First set :", s1)
print("Second set :", s2)