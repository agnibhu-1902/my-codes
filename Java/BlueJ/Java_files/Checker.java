/* Write a programme to check whether a number is negative or positive or neutral. Write it in Java language. */
import java.io.*;
public class Checker
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int opt,a,i;
        for(i=1;i<=5;i++)
        {
            System.out.print("Enter a number : ");
            opt=Integer.parseInt(in.readLine());
            a=opt;
            if(a<0)
            {
                System.out.println("The number entered is a negative number");
            }
            else if(a>0)
            {
                System.out.println("The number entered is a positive number");
            }
            else if(a==0)
            {
                System.out.println("The number entered is a neutral number");
            }
            else
            {
                System.out.println("Invalid input");
            }
        }
    }//end of main
}//end of class


