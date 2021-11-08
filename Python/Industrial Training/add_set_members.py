# 5. Write a Python program to add member(s) in a set.
print("Enter set members (Press q to quit) :")
s = set()
while True:
    n = input()
    if n == 'q':
        break
    else:
        s.add(n)
print("The set is :", s)