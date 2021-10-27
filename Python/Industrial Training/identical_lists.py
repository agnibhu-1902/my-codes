# Write a program to check whether two given lists are identical or not.
a, b = [], []
n = int(input("Enter the range of the list : "))
for i in range(n):
    tmp = int(input("Enter value at index {} of first list: ".format(i + 1)))
    a.append(tmp)
for i in range(n):
    tmp = int(input("Enter value at index {} of second list: ".format(i + 1)))
    b.append(tmp)
flag = True
for i in range(n):
    if not a[i] == b[i]:
        flag = False
if flag:
    print("Lists {0} and {1} are identical".format(a, b))
else:
    print("Lists {0} and {1} are not identical".format(a, b))