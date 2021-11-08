# 4. Count the negative and positive numbers of a tuple
tup = []
n = int(input("Enter the number of elements in the tuple : "))
print("Enter tuple values :")
for i in range(n):
    tmp = int(input())
    tup.append(tmp)
tup = tuple(tup)
neg, pos = 0, 0
for no in tup:
    if no > 0:
        pos += 1
    elif no < 0:
        neg += 1
print("Positive numbers : ", pos)
print("Negative numbers : ", neg)