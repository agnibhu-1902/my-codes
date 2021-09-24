import java.io.*;
public class Pattern41
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
                if(j%2==0)
                {
                    System.out.print("# ");
                }
                else
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}
