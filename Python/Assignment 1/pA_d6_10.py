n=int(input("Enter a number : "))
print(n*'*')
for i in range(1,n+1):
    print(' '*(n-i)+'*')
print(n*'*')