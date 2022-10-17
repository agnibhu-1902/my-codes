import java.io.*;
public class Pattern38
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c,k;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=h+2;
        for(i=1;i<=h;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c-=2;
            if(i==h)
            {
                k=i-1;
            }
            else
            {
                k=i;
            }
            for(;k>=1;k--)
            {
                System.out.print(k+" ");
            }
            System.out.println();
        }
    }
}
