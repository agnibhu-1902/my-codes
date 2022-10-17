import java.io.*;
public class Exchange
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        int n,p=1,m,c=0;
        System.out.print("Enter a number:");
        n=Integer.parseInt(in.readLine());
        m=n;
        while(m>0)
        {
            c++;
            m/=10;
        }
        if(c%2==0)
        {
            for(int i=1;i<=c/2;i++)
            {
                p*=10;
            }
            m=(n%p)*p+(n/p);
            System.out.println(m);
        }
    }
}
