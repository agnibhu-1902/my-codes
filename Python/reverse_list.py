def reverse_list(list):
    newlist = []
    for elem in list:
        newlist.insert(0, elem)
    return newlist

list = [1, 4, 3, 5, 2, 6, 0]
print(reverse_list(list))