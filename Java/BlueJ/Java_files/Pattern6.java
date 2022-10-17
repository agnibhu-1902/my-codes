import java.io.*;
public class Pattern6
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=1;i<=h;i++)
        {
            for(j=i;j<=h;j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
