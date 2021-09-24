import java.util.*;
public class Consecutive
{
    public static void main(String args[])
    {
        int no;
        System.out.print("Enter a number:");
        Scanner sc=new Scanner(System.in);
        no=sc.nextInt();
        for(int i=1;i<no;i++)
        {
            int s=0;
            for(int j=i;j<no;j++)
            {
                s+=j;
                if(s==no)
                {
                    for(int k=1;k<=j;k++)
                    {
                        System.out.print(k+", ");
                        System.out.println();
                    }
                }
            }
        }
    }
}
