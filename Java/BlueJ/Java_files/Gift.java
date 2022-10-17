//Program Gift
import java.util.*;
public class Gift
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int c,r,s=0;char ans;short qty;
        do
        {
            System.out.print("Enter item code:");
            c=sc.nextInt();
            System.out.print("Enter quantity:");
            qty=sc.nextShort();
            System.out.print("Enter rate:");
            r=sc.nextInt();
            s+=(qty*r);
            System.out.print("Are any more items left to be purchased?(Y/N)");
            ans=sc.next().trim().charAt(0);
        }
        while(ans=='y'||ans=='Y');
        if(ans=='n'||ans=='N')
        {
            System.out.println("Net amount="+s);
            if(s>=100&&s<500)
            {
                System.out.println("You receive a key ring");
            }
            else if(s>=500&&s<1000)
            {
                System.out.println("You receive a leather purse");
            }
            else if(s>=1000)
            {
                System.out.println("You receive a pocket calculator");
            }
            else
            {
                System.out.println("Your net amount is too low for receiving a gift");
            }
            System.out.println("------------Thank you------------");
        }
        else
        {
            System.out.println("Invalid input");
            System.out.println("Program terminated");
        }
    }
}
