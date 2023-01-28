public class ExceptionHandling
{
    public static void main(String args[])
    {
        try
        {
            int a = 1, b = 0;
            System.out.println(a/b);
        }
        catch (ArithmeticException e)
        {
            System.out.println(e);
        }
        try
        {
            int arr[] = {1};
            System.out.println(arr[2]);
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        System.out.println("After try/catch block.");
    }
}
