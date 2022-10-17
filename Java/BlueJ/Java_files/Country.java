// To display the capital of different countries
import java.io.*;
public class Country
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int c;
        System.out.println("1.India");
        System.out.println("2.England");
        System.out.println("3.France");
        System.out.println("4.Italy");
        System.out.println("5.Argentina");
        System.out.print("Enter choice : ");
        c=Integer.parseInt(in.readLine());
        if(c==1)
        {
            System.out.println("Capital is New Delhi");
        }
        else if(c==2)
        {
            System.out.println("Capital is London");
        }
        else if(c==3)
        {
            System.out.println("Capital is Paris");
        }
        else if(c==4)
        {
            System.out.println("Capital is Rome");
        }
        else if(c==5)
        {
            System.out.println("Capital is Buenos Aires");
        }
        else
        {
            System.out.println("Invalid input");
        }
    }//end of main
}//end of class
