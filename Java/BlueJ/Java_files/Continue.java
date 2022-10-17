import java.util.*;
public class Continue
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int i,a,b;
        System.out.print("Enter the starting range:");
        a=sc.nextInt();
        System.out.print("Enter the ending range:");
        b=sc.nextInt();
        i=a;
        while(i<=b)
        {
            if(i%3==0)
            {
                i++;
                continue;
            }
            System.out.println(i);
            i++;
        }
    }
}
