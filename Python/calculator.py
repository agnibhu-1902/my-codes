class Calculator:
    def __init__(self,no):
        self.square=no**2
        self.cube=no**3
        self.sqrt=no**0.5
        self.hello()
    @staticmethod
    def hello():
        print("Hello!")
    def getInfo(self):
        print(f"Square : {self.square}\nCube : {self.cube}\nSquare root : {self.sqrt}")
n=int(input("Enter a number : "))
o1=Calculator(n)
o1.getInfo()