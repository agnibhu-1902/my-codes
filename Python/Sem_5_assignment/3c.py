import re

# Split a string into a list of words using the ' ' character as a delimiter
string = "this is a string"
words = re.split(r' ', string)
print(words)  # ['this', 'is', 'a', 'string']

# Join the words back into a single string using the '-' character as a separator
joined_string = re.join(r'-', words)
print(joined_string)  # this-is-a-string

# Search for the pattern 'is' in the string
match = re.search(r'is', string)
print(match.group())  # is

# Try to match the pattern 'this' at the start of the string
match = re.match(r'this', string)
print(match.group())  # this
