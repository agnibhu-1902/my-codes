import java.io.*;
public class Buffer
{
    public static void main()throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int a,b;
        System.out.println("Enter 2 numbers");
        a=Integer.parseInt(in.readLine());
        b=Integer.parseInt(in.readLine());
        if(a>b)
        {
            System.out.println(a+" is greater");
        }
        else if(b>a)
        {
            System.out.println(b+" is greater");
        }
        else
        {
            System.out.println("They are equal");
        }
    }//end of main
}//end of class
