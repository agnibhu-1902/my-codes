x,y,z=int(input("Enter 3 numbers:\n")),int(input()),int(input())
if x>y and x>z:
    if y>z:
        print("2nd greatest :",y)
    else:
        print("2nd greatest :",z)
elif y>x and y>z:
    if x>z:
        print("2nd greatest :",x)
    else:
        print("2nd greatest :",z)
else:
    if x>y:
        print("2nd greatest :",x)
    else:
        print("2nd greatest :",y)