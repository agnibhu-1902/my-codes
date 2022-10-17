import java.io.*;
public class Pattern1
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=1;i<=h;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
