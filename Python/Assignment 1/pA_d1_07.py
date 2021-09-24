import math
def add(x,y):
    print("Result :",x+y)
def sub(x,y):
    print("Result :",x-y)
def mul(x,y):
    print("Result :",x*y)
def div(x,y):
    print("Result :",x/y)
def mod(x,y):
    print("Result :",x%y)
def exp(x,y):
    print("Result :",math.pow(x,y))
while True:
    x,y=int(input("Enter 2 numbers\n")),int(input())
    print("Menu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exponent\n0.Exit\nEnter choice : ")
    ch=int(input())
    if ch==1:
        add(x,y)
    elif ch==2:
        sub(x,y)
    elif ch==3 :
        mul(x,y)
    elif ch==4:
        div(x,y)
    elif ch==5:
        mod(x,y)
    elif ch==6:
        exp(x,y)
    elif ch==0:
        break
    else:
        print("Invalid choice!")