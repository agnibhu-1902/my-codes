import math
q=input("Enter quadratic equation (ax^2+bx+c) : ")
a=int(q[:q.find("x^2")])
b=int(q[q.find("x^2")+3:q.rfind("x")])
c=int(q[q.rfind("x")+1:])
if math.pow(b,2)-4*a*c<0:
    print("Roots are imaginary!")
elif math.pow(b,2)-4*a*c==0:
    print("Root :",(-b+math.sqrt(math.pow(b,2)-4*a*c))/(2*a))
else:
    print("Roots :",(-b+math.sqrt(math.pow(b,2)-4*a*c))/(2*a),end=", ")
    print((-b-math.sqrt(math.pow(b,2)-4*a*c))/(2*a))