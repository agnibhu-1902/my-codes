a=int(input("Enter value('a') : "))
b=int(input("Enter value('b') : "))
def power(a,b):
    if b==0:
        return 1
    else:
        return a*power(a,b-1)
print("Power (a^b) :",power(a,b))