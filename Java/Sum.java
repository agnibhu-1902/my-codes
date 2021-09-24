import java.util.*;
public class Sum
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,t,s=0,d,x;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        t=n;
        while(t>0)
        {
            d=t/10;
            x=t-(d*10);
            s+=x;
            t/=10;
        }
        System.out.println("Sum = "+s);
    }
}
