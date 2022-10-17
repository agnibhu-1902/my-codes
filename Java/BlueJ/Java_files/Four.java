import java.util.*;
public class Four
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,d,w,c=0,a,b,z;
        System.out.print("Enter a number:");
        n=sc.nextInt();
        w=n;
        while(w>0)
        {
            d=w%10;
            c++;
            w/=10;
        }
        if(c==4)
        {
            a=n/1000;
            b=n%10;
            z=a+b;
            System.out.println(z);
        }
        else
        {
            System.out.println("Not a 4-digit number");
        }
    }
}
