n=int(input("Enter a number : "))
for i in range(1,n+1):
    print(i*' '+'**'+(2*(n-i)+1)*' '+'**')
for i in range(1,n+1):
    print((n-i+1)*' '+'**'+(2*i-1)*' '+'**')