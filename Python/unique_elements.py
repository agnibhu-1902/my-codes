def unique_elements(list):
    newlist = []
    for elem in list:
        if list.count(elem) == 1:
            newlist.append(elem)
    return newlist

list = [1, 2, 1, 3, 2, 2, 4, 5, 9, 7, 7, 0]
print(unique_elements(list))