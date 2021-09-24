import java.io.*;
public class Amicable
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int aSum,bSum,a,b,i,j;aSum=0;bSum=0;
        System.out.println("Enter 2 numbers");
        a=Integer.parseInt(in.readLine());
        b=Integer.parseInt(in.readLine());
        for(i=1;i<=a-1;i++)
        {
            if(a%i==0)
            {
                aSum+=i;
            }
        }
        for(j=1;j<=b-1;j++)
        {
            if(b%j==0)
            {
                bSum+=j;
            }
        }
        if(a==bSum&&b==aSum)
        {
            System.out.println("Pair of amicable numbers");
        }
        else
        {
            System.out.println("Not a pair of amicable numbers");
        }
    }
}

        