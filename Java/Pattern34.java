import java.io.*;
public class Pattern34
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
            for(j=3;j<=i+2;j++)
            {
                System.out.print(j+" ");
            }
            for(j=i+1;j>=3;j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
