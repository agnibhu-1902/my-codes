w = input("Enter a number : ")
s, n = 0, abs(int(w))
for i in range(len(w)):
    s += int(n % 10)
    n //= 10
if s == 10:
    print(w, "is a magic number")
else:
    print(w, "is not a magic number")