// To calculate using Java
import java.io.*;
public class Calculator
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        int a,b,c;
        System.out.println("Welcome!");
        while(true)
        {
            System.out.println();
            System.out.println("Please enter 2 numbers");
            a=Integer.parseInt(in.readLine());
            b=Integer.parseInt(in.readLine());
            System.out.println("1.Add");
            System.out.println("2.Subtract");
            System.out.println("3.Multiply");
            System.out.println("4.Divide");
            System.out.println("5.Exit");
            System.out.print("Enter choice:");
            c=Integer.parseInt(in.readLine());
            System.out.println();
            switch(c)
            {
                case 1:
                System.out.println("Result = "+(a+b));
                break;
                case 2:
                System.out.println("Result = "+(a-b));
                break;
                case 3:
                System.out.println("Result = "+(a*b));
                break;
                case 4:
                System.out.println("Result = "+(a/(double)b));
                break;
                case 5:
                System.out.println("Program terminated");
                System.exit(1);
                default:
                System.out.println("Invalid option");
            }
        }
    }//end of main
}//end of class
