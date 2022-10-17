/* To check whether a given number is an automorphic number or not */
import java.io.*;
public class Automorphic
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int n,w,c,m,r;c=1;
        System.out.print("Enter a number : ");
        n=Integer.parseInt(in.readLine());
        w=n;
        do
        {
            c*=10;
            w/=10;
        }
        while(w!=0);
        m=n*n;
        r=m%c;
        if(r==n)
        {
            System.out.println("Automorphic number");
        }
        else
        {
            System.out.println("Not an automorphic number");
        }
    }//end of main
}//end of class
