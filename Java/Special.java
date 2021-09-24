/* Write a program to check whether a given number is a KrishnaMurti (Special) number or not. Write in Java language. */
import java.io.*;
public class Special
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int n,w,s=0,d,f,p;
        System.out.print("Enter a number : ");
        n=Integer.parseInt(in.readLine());
        w=n;
        while(w!=0)
        {
            d=w%10;
            f=1;p=1;
            while(p<=d)
            {
                f*=p;
                p++;                
            }
            s+=f;
            w/=10;
        }
        if(s==n)
        {
            System.out.println("Special number");
        }
        else
        {
            System.out.println("Not a special number");
        }
    }//end of main
}//end of class
            