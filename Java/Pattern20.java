import java.io.*;
public class Pattern20
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=0;
        for(i=h;i>=1;i--)
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
