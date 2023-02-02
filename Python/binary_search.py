def binary_search(list):
    n = int(input('Enter the number to search: '))
    lb, ub = 0, len(list) - 1
    while lb <= ub:
        mid = (lb + ub) // 2
        if n > list[mid]:
            lb = mid + 1
        elif n < list[mid]:
            ub = mid - 1
        elif n == list[mid]:
            return True
    return False

list = [1, 2, 3, 4, 5]
list.sort()
if binary_search(list):
    print('Found')
else:
    print('Not found')