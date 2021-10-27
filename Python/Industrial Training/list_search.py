''' Write a python program to check whether a number is present or not in a list.
Print it's index number if present and also count the number of occurance. '''
l = []
n = int(input("Enter the range of the list : "))
for i in range(n):
    tmp = int(input("Enter value at index {} : ".format(i + 1)))
    l.append(tmp)
count, index, flag = 0, [], 0
s = int(input("Enter the number to search : "))
for i in range(len(l)):
    if s == l[i]:
        index.append(i)
        count += 1
        flag = 1
if flag == 0:
    print("{} is not present in the list".format(s))
else:
    print("{} is present at index:".format(s))
    for pos in index:
        print(pos + 1)
    print("Number of occurances: {}".format(count))