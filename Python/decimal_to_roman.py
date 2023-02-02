n = int(input('Enter a number: '))
if n < 0:
    print('Enter a valid value!')
else:
    val = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    syb = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
    romnum, i = '', 0
    while n > 0:
        if n - val[i] >= 0:
            romnum += syb[i]
            n -= val[i]
        else:
            i += 1
    print('Roman form:', romnum)