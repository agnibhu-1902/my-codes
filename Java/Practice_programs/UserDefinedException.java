import java.util.*;

class NegativeSizeException extends Exception
{
    public NegativeSizeException(String s)
    {
        super(s);
    }
}

public class UserDefinedException
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        try
        {
            for (int i = 0; i < a.length; i++)
            {
                System.out.print("Enter the value for a[" + i + "]: ");
                int temp = sc.nextInt();
                if (temp < 0)
                    throw new NegativeSizeException("Negative number entered");
                else
                    a[i] = temp;
            }
            for (int i = 0; i < a.length; i++)
                System.out.println("a[" + i + "]: " + a[i]);
        }
        catch (NegativeSizeException e)
        {
            System.out.println(e);
        }
        finally
        {
            sc.close();
        }
    }
}
