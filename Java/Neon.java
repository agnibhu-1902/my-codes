import java.util.*;
public class Neon
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,p,s=0,d;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        p=n*n;
        do
        {
            d=p%10;
            s+=d;
            p/=10;
        }
        while(p!=0);
        if(s==n)
        {
            System.out.println("Neon number");
        }
        else
        {
            System.out.println("Not a neon number");
        }
    }
}
