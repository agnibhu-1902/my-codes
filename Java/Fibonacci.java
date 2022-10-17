import java.io.*;
public class Fibonacci
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
        int n;
        do
        {
            System.out.print("Enter a number: ");
            n=Integer.parseInt(br.readLine());
        } while (n<0);
        int a=0,b=1,c;
        System.out.print(a+"\t"+b);
        for(int i=3;i<n;i++)
        {
            c=a+b;
            System.out.print("\t"+c);
            a=b; b=c;
        }
    }
}
