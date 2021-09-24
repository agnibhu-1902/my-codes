import java.io.*;
public class Pattern5
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=h;i>=1;i--)
        {
            for(j=i;j>=1;j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
