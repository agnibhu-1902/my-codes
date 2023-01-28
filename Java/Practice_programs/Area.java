import java.util.Scanner;

abstract class Shape
{
    double a, b, r;
    public abstract void area();
}

class Rectangle extends Shape
{
    public Rectangle(double a, double b)
    {
        this.a = a; this.b = b;
    }
    public void area()
    {
        System.out.println("Rectangle area: " + a * b);
    }
}

class Triangle extends Shape
{
    public Triangle(double a, double b)
    {
        this.a = a; this.b = b;
    }
    public void area()
    {
        System.out.println("Triangle area: " + 1 / (double) 2 * a * b);
    }
}

class Circle extends Shape
{
    public Circle(double r)
    {
        this.r = r;
    }
    public void area()
    {
        System.out.printf("Circle area: %,.2f\n", Math.PI * Math.pow(r, 2));
    }
}

public class Area
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter values for a, b and r:");
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double r = sc.nextDouble();
        Rectangle rectangle = new Rectangle(a, b);
        rectangle.area();
        Triangle triangle = new Triangle(a, b);
        triangle.area();
        Circle circle = new Circle(r);
        circle.area();
        sc.close();
    }
}