# 3. Find out the difference of largest and smallest element of a tuple
tup = []
n = int(input("Enter the number of elements in the tuple : "))
print("Enter tuple values :")
for i in range(n):
    tmp = int(input())
    tup.append(tmp)
tup = tuple(tup)
maxi = max(tup)
mini = min(tup)
print("Largest element :", maxi)
print("Smallest element :", mini)
print("Difference between the largest and smallest element of the tuple : ", maxi - mini)