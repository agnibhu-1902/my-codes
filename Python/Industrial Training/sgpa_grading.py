# SGPA Grading System
sgpa = float(input("Enter SGPA : "))
print("The Grade for SGPA {0} is :".format(sgpa))
print("Not available") if sgpa > 10.00 or sgpa < 0.00 else print('A++') if sgpa >= 9.00 else print('A+') if sgpa >= 8.00 else print('A') if sgpa >= 7.00 else print('B') if sgpa >= 6.00 else print('C') if sgpa >= 5.00 else print('QH') if sgpa >= 4.00 else print('P') if sgpa >= 3.00 else print('F')