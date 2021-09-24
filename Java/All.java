import java.util.*;
public class All
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,c,i,s=0,z=1;
        System.out.print("Enter range:");
        n=sc.nextInt();
        System.out.println("1.Add");
        System.out.println("2.Multiply");
        System.out.print("Enter choice:");
        c=sc.nextInt();
        switch(c)
        {
            case 1:
                for(i=1;i<=n;i++)
                {
                    s+=i;
                }
                System.out.println("Result="+s);
                break;
            case 2:
                for(i=1;i<=n;i++)
                {
                    z*=i;
                }
                System.out.println("Result="+z);
                break;
            default:
                System.out.println("Invalid choice");
        }
    }
}
