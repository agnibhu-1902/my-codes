class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width
    def area(self):
        return self.length * self.width

l = int(input('Enter length: '))
w = int(input('Enter width: '))
rect = Rectangle(l, w)
print('Area =', rect.area())