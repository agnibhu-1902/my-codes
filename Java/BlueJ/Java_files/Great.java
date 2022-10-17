import java.util.*;
public class Great
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,a,b,c;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        a=n%10;
        b=n/10;
        c=b/10;
        b=a/100;
        if(a>b&&a>c)
        {
            System.out.println(a+" is greater");
        }
        else if(b>a&&b>c)
        {
            System.out.println(b+" is greater");
        }
        else
        {
            System.out.println(c+" is greater");
        }
    }
}
