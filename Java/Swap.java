import java.io.*;
class Swap
{
    public static void main(String args[])throws IOException
    {
        int a, b, temp;
        InputStreamReader IN=new InputStreamReader(System.in);
        BufferedReader BR=new BufferedReader(IN);
        System.out.print("Enter value 1: ");
        a=Integer.parseInt(BR.readLine());
        System.out.print("Enter value 2: ");
        b=Integer.parseInt(BR.readLine());
        temp=a;
        a=b;
        b=temp;
        System.out.println("===== After Swapping =====");
        System.out.println("Value 1: "+a);
        System.out.println("Value 2: "+b);
    }
}
