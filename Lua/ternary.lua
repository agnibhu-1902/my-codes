io.write('Age? ')
age = tonumber(io.read())
local check = age >= 18 and 'Adult' or 'Child'
print(check)