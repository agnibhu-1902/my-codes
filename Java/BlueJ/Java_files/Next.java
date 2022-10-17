// Write a program to print your next class
import java.util.*;
public class Next
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String n;short c;
        System.out.print("Enter your name:");
        n=sc.next();
        System.out.print("Enter your class:");
        c=sc.nextShort();
        System.out.println(n+", your next class will be "+(c+1)+". ");
    }//end of main
}//end of class
