# 2. Find out the 3rd largest element of a tuple
tup = []
n = int(input("Enter the number of elements in the tuple : "))
print("Enter tuple values :")
for i in range(n):
    tmp = int(input())
    tup.append(tmp)
tup = tuple(tup)
fmax = max(tup)
smax, tmax = 0, 0
for n in tup:
    if n > smax and n < fmax:
        smax = n
for n in tup:
    if n > tmax and n < smax:
        tmax = n
print("Third largest element in the tuple :", tmax)