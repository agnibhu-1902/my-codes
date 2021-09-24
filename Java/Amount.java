import java.util.*;
public class Amount
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int amt,c;String n;
        double d,na;
        System.out.print("Enter the number of customers:");
        c=sc.nextInt();
        for(int i=1;i<=c;i++)
        {
            System.out.print("Enter your name:");
            n=sc.next();
            System.out.print("Enter your ticket amount:");
            amt=sc.nextInt();
            if(amt>70000)
            {
                d=18/(double)100*amt;
            }//end of if
            else if(amt>=55001&&amt<=70000)
            {
                d=16/(double)100*amt;
            }//end of else if
            else if(amt>=35001&&amt<=55000)
            {
                d=12/(double)100*amt;
            }//end of else if
            else if(amt>=25001&&amt<=35000)
            {
                d=10/(double)100*amt;
            }//end of else if
            else
            {
                d=2/(double)100*amt;
            }//end of else
            na=amt-d;
            System.out.println("Sl. no.\tName\tCharge\tDiscount\tNet amount");
            System.out.println(i+"\t"+n+"\t"+amt+"\t"+d+"\t\t"+na);
        }//end of for
    }//end of main
}//end of class
