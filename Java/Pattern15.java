import java.io.*;
public class Pattern15
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=h-1;
        for(i=1;i<=h;i++)
        {
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c--;
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
            for(j=i-1;j>=1;j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
