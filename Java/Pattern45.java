import java.util.*;
class Pattern45
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter height");
        int h=sc.nextInt(),count=h-1;
        for(int i=1;i<=h;i++)
        {
            for(int sp=1;sp<=count;sp++)
            System.out.print(" ");
            count--;
            if(i==1)
            System.out.println("@");
            else if(i<h)
            {
                for(int j=1;j<=i;j++)
                {
                    if(j==1)
                    System.out.print("@");
                    else
                    System.out.print((j-1));
                }
                for(int j=i-1;j>=1;j--)
                {
                    if(j==1)
                    System.out.print("@");
                    else
                    System.out.print((j-1));
                }
                System.out.println();
            }
            if(i==h)
            {
                for(int k=1;k<=2*h-1;k++)
                System.out.print("@");
                System.out.println();
            }
        }
    }
}