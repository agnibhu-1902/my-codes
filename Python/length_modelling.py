class Length:
    def __init__(self):
        self.length_feet, self.length_inch = 0, 0
    def setLength(self, length_feet, length_inch):
        self.length_feet = length_feet
        self.length_inch = length_inch
    def __str__(self):
        return 'Length in feet: ' + str(self.length_feet) + '\nLength in inches: ' + str(self.length_inch)
    def __add__(self, other):
        return self.length_feet + other.length_feet, self.length_inch + other.length_inch

length1 = Length()
length1.setLength(14, 24)
length2 = Length()
length2.setLength(15, 31)
print(length1)
print(length2)
print(length1 + length2)