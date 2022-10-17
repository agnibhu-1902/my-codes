import java.util.*;
public class ZeroFree
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,d,c=0;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        while(n>0)
        {
            d=n%10;
            c++;
            n/=10;
        }
        if(c!=0)
        {
            System.out.println("Zero free number");
        }
        else
        {
            System.out.println("Not a zero free number");
        }
    }
}
