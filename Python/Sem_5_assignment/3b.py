# Create a list of words
words = ["this", "is", "a", "list", "of", "words"]

# Join the words in the odd indices using the join method and slice notation
odd_words = " ".join(words[1::2])

# Join the words in the even indices using the join method and slice notation
even_words = " ".join(words[::2])

# Print the resulting strings
print("Odd words:", odd_words)
print("Even words:", even_words)
