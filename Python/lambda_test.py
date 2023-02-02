ls = [1, -3, 2]

print("Maximum:", max(ls, key=lambda x: x if x >= 0 else -x))
