import java.util.*;
public class Series
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int s=0,x,n,d=1,f=1;
        System.out.print("Enter base:");
        x=sc.nextInt();
        System.out.print("Enter power:");
        n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            f*=x;
            s+=f*d;
            d*=(-1);
        }
        System.out.println(s);
    }
}
