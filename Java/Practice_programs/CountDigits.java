import java.util.Scanner;

class Counter
{
    private int n;
    public Counter(int n)
    {
        this.n = n;
    }
    public int countDigits()
    {
        int count = 0, w = n;
        while (w != 0)
        {
            count++;
            w /= 10;
        }
        return count;
    }
}

public class CountDigits
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        Counter counter = new Counter(n);
        System.out.println("Count of digits: " + counter.countDigits());
        sc.close();
    }
}