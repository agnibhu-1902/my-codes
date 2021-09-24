import java.io.*;
public class Pattern10
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=1;i<=h;i++)
        {
            for(j=i;j>=1;j--)
            {
                System.out.print(j%2+" ");
            }
            System.out.println();
        }
    }
}
