/* Write a programme to input a number. Check whether it is a happy number or not. */
import java.io.*;
public class Happy
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        int n,w,d,s,f;f=0;
        System.out.print("Enter a number:");
        n=Integer.parseInt(in.readLine());
        w=n;
        while(w>9)
        {
            s=0;
            do
            {
                d=w%10;
                s=s+d*d;
                w/=10;
            }
            while(w!=0);
            if(s==1)
            {
                f=1;
                break;
            }
            else
            {
                w=s;
            }
        }
        if(f==1)
        {
            System.out.println("Happy number");
        }
        else
        {
            System.out.println("Not a happy number");
        }
    }//end of main
}//end of class
