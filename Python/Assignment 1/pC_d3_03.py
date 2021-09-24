n=input("Enter sentence : ")
v,c,sp,sc,t=0,0,0,0,"AEIOUaeiou"
for i in n:
    if i==' ':
        sp+=1
    elif t.find(i)!=-1:
        v+=1
    elif t.find(i)==-1 and ((i>'A' and i<'Z') or (i>'a' and i<'z')):
        c+=1
    elif i<'0' or i>'9':
        sc+=1
print("Vowels :",v)
print("Consonants :",c)
print("Spaces :",sp)
print("Special characters :",sc)