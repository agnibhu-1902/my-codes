import math

class Circle:
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        return math.pi * math.pow(self.radius, 2)
    def perimeter(self):
        return 2 * math.pi * self.radius

r = int(input("Enter the radius of the circle: "))
circle = Circle(r)
print('Area =', circle.area())
print('Perimeter =', circle.perimeter())