// To display colours
import java.io.*;
public class Colour
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int c;
        System.out.println("1.Red");
        System.out.println("2.Blue");
        System.out.println("3.Green");
        System.out.println("4.Yellow");
        System.out.print("Enter choice : ");
        c=Integer.parseInt(in.readLine());
        if(c==1)
        {
            System.out.println("Red");
        }
        else if(c==2)
        {
            System.out.println("Blue");
        }
        else if(c==3)
        {
            System.out.println("Green");
        }
        else if(c==4)
        {
            System.out.println("Yellow");
        }
        else
        {
            System.out.println("Invalid input");
        }
    }//end of main
}//end of class
