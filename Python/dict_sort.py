dictionary = {'a': 20, 'b': 10, 'c': 5, 'd': 40}
dictionary = dict(sorted(dictionary.items(), key = lambda kv: kv[1]))
print(dictionary)