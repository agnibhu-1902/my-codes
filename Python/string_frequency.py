def count_letters(str):
    letter_freq = {}
    for ch in str:
        if ch in letter_freq.keys():
            letter_freq[ch] += 1
        else:
            letter_freq[ch] = 1
    return letter_freq

def count_words(str):
    word_freq = {}
    words = str.split()
    for word in words:
        if word in word_freq.keys():
            word_freq[word] += 1
        else:
            word_freq[word] = 1
    return word_freq

str = input('Enter a string: ')
print('Word count:', count_words(str))
print('Letter count:', count_letters(str))