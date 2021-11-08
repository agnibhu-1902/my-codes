# 6. Write a Python program to remove an item from a set if it is present in the set.
print("Enter set members (Press q to quit) :")
s = set()
while True:
    n = input()
    if n == 'q':
        break
    else:
        s.add(n)
print("The set is :", s)
rem = input("Enter the item to remove : ")
s.discard(rem)
print("The final set is : ", s)