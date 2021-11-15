n = int(input("Enter range of the list : "))
print("Enter list values :")
l = []
for i in range(n):
    tmp = int(input())
    l.append(tmp)
half_list = list(map(lambda x: x // 2, l))
print("The halved list is :", half_list)