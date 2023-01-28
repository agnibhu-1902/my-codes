import java.util.Scanner;

class Overload
{
    public static int sum(int x, int y)
    {
        return x + y;
    }
    public static int sum(int x, int y, int z)
    {
        return x + y + z;
    }
}

public class Sum
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values of x, y and z:");
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        System.out.println("Sum of 2 values: " + Overload.sum(x, y));
        System.out.println("Sum of 3 values: " + Overload.sum(x, y, z));
        sc.close();
    }
}