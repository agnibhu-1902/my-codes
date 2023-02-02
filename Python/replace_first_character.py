str = input('Enter a string: ')
str = str[0] + str[1:].replace(str[0], '$')
print(str)