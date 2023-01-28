import java.util.*;

public class PascalsTriangle
{
    public static int factorial(int n)
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
            f *= i;
        return f;
    }

    public static int ncr(int n, int r)
    {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter height: ");
        int h = sc.nextInt();
        for (int i = 0; i <= h; i++)
        {
            for (int j = 0; j <= h - i; j++)
                System.out.print(" ");
            for (int j = 0; j <= i; j++)
                System.out.print(ncr(i, j) + " ");
            System.out.println();
        }
        sc.close();
    }
}
