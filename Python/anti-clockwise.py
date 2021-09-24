row,col=2,3
n=[[1,4,5],[7,2,0]]
p,q=[],[]
for i in range(0,row):
    for j in range(0,col):
        print(n[i][j],end=" ")
    print()
print()
for i in range(col-1,-1,-1):
    for j in range(0,row):
        q.append(n[j][i])
    p.append(q)
    q=[]
for i in range(0,col):
    for j in range(0,row):
        print(p[i][j],end=" ")
    print()