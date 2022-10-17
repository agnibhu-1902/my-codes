import java.util.*;
public class Previous
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String n;short c;
        System.out.print("Enter your name:");
        n=sc.next();
        System.out.print("Enter your class:");
        c=sc.nextShort();
        System.out.println(n+", your previous class was "+(c-1)+". ");
    }//end of main
}//end of class
