import java.util.Scanner;

class Square
{
    protected double side;
    public Square(double side)
    {
        this.side = side;
    }
    public double getVolume()
    {
        return Math.pow(side, 3);
    }
}

class Cylinder extends Square
{
    private double height;
    public Cylinder(double radius, double height)
    {
        super(radius);
        this.height = height;
    }
    public double getVolume()
    {
        return Math.PI * Math.pow(side, 2) * height;
    }
}

public class Volume
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers:");
        double r = sc.nextInt();
        double h = sc.nextInt();
        Square square = new Square(r);
        Square cylinder = new Cylinder(r, h);
        System.out.println("Volume of square: " + square.getVolume());
        System.out.println("Volume of cylinder: " + cylinder.getVolume());
        sc.close();
    }
}
