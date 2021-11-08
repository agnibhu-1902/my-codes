# 1. Write a Python program to Join Tuples if both have similar first element.
l, tup = [], []
t = int(input("Enter the number of tuples to be inserted : "))
for i in range(t):
    n = int(input("Enter the number of elements in tuple {} : ".format(i+1)))
    print("Enter values in tuple {} :".format(i+1))
    for j in range(n):
        tmp = input()
        tup.append(tmp)
    l.append(tuple(tup))
    tup.clear()
flag = False
print ("The tuples are :")
for elem in l:
    print(elem, end=' ')
print("\nThe joined tuples (with similar first element) are :")
for i in range(len(l)):
    for k in range(i):
        if l[i] == l[k]:
            flag = True
    if not flag == True:
        for j in range(i+1, len(l)):
            if l[i][0] == l[j][0]:
                print(l[i] + l[j][1:])