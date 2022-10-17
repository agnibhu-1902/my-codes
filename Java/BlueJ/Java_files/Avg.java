import java.io.*;
public class Avg
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int no,r,i,s=0;double avg;
        System.out.print("Enter range:");
        r=Integer.parseInt(br.readLine());
        for(i=1;i<=r;i++)
        {
            System.out.print("Enter a number:");
            no=Integer.parseInt(br.readLine());
            s+=no;
        }
        avg=s/(double)r;
        System.out.println("Sum = "+s);
        System.out.println("Average = "+avg);
    }
}
