import java.io.*;
public class Array_Example
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n;
        do
        {
            System.out.print("Enter the number of terms: ");
            n=Integer.parseInt(br.readLine());
        } while (n<=0);
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.print("Enter value at index "+i+": ");
            a[i]=Integer.parseInt(br.readLine());
        }
        for(int i=0;i<n;i++)
            System.out.println("Result at index "+i+": "+(a[i]*10));
    }
}