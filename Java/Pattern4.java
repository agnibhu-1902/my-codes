import java.io.*;
public class Pattern4
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=h;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
