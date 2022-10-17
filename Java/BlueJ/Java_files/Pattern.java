import java.util.*;
public class Pattern
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int i,n,s=0;
        System.out.print("Enter height:");
        n=sc.nextInt();
        for(i=1;i<=n;i++)
        {
            s=s*10+i;
            System.out.println(s);
        }
    }
}
