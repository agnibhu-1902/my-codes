import java.util.Scanner;
public class Armstrong
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int w = n, s = 0;
        while (w != 0)
        {
            s += Math.pow((w % 10), 3);
            w /= 10;
        }
        if (s == n)
            System.out.println("Armstrong number");
        else
            System.out.println("Not an Armstrong number");
        sc.close();
    }
}