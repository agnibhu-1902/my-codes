import java.util.Scanner;

abstract class Shape {
    // Abstract method to calculate the area of a shape
    public abstract double getArea();
}

class Square extends Shape {
    // Length of the sides of the square
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    public double getArea() {
        // Calculate the area of the square
        return side * side;
    }
}

class Rectangle extends Shape {
    // Length and width of the rectangle
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double getArea() {
        // Calculate the area of the rectangle
        return length * width;
    }
}

public class Area {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Accept the side length of the square
        System.out.print("Enter the side length of the square: ");
        double side = scanner.nextDouble();

        // Create a square with the given side length
        Shape square = new Square(side);
        double area = square.getArea();
        System.out.println("The area of the square is " + area + ".");

        // Accept the length and width of the rectangle
        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();
        System.out.print("Enter the width of the rectangle: ");
        double width = scanner.nextDouble();

        // Create a rectangle with the given length and width
        Shape rectangle = new Rectangle(length, width);
        area = rectangle.getArea();
        System.out.println("The area of the rectangle is " + area + ".");

        // Close the Scanner object
        scanner.close();
    }
}
