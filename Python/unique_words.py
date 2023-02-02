fname = input('Enter file name: ')
file = open(fname)
unique_words = []
for line in file:
    words = line.strip().split()
    for word in words:
        if word in unique_words:
            continue
        unique_words.append(word)
unique_words.sort()
print('Unique words:', unique_words)