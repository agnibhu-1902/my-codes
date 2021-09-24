n=input("Enter name : ")
n=" "+n
for i in range(len(n)-1):
    if n[i]==" ":
        print(n[i+1]+".",end="")
n.strip()