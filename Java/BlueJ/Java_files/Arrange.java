import java.util.*;
public class Arrange
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,d,s=0,x=0,t;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        while(n>0)
        {
            d=n%10;
            s=s*10+d;
            n/=10;
        }
        t=s;
        while(s>0)
        {
            d=s%10;
            if(d%2==1)
            {
                x=x*10+d;
                s/=10;
            }
        }
        while(t>0)
        {
            d=t%10;
            if(d%2==0)
            {
                x=x*10+d;
                t/=10;
            }
        }
        System.out.println("Result = "+x);  
    }
}
