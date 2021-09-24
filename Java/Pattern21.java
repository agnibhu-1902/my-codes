import java.io.*;
public class Pattern21
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c,z;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=h-1;z=h-1;
        for(i=1;i<=h;i++)
        {
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c--;
            for(j=1;j<=2*i-1;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
        c=1;
        for(i=z;i>=1;i--)
        {
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c++;
            for(j=2*i-1;j>=1;j--)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
