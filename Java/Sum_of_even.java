import java.util.*;
public class Sum_of_even
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,s=0,i;
        System.out.print("?");
        n=sc.nextInt();
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                s+=i;
            }
        }
        System.out.println("Sum of the even numbers is "+s+". ");
    }
}
