import java.io.*;
public class Max
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int r,no,i,max;
        System.out.print("Enter range:");
        r=Integer.parseInt(br.readLine());
        System.out.print("Enter a number:");
        max=Integer.parseInt(br.readLine());
        for(i=1;i<r;i++)
        {
            System.out.print("Enter a number:");
            no=Integer.parseInt(br.readLine());
            if(no>max)
            {
                max=no;
            }
        }
        System.out.println("Maximum number = "+max);
    }
}
