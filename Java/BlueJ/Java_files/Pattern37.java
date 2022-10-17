import java.io.*;
public class Pattern37
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c,k;char ch;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=-1;
        for(i=h;i>=1;i--)
        {
            ch='A';
            for(j=1;j<=i;j++)
            {
                System.out.print(ch+++" ");
            }
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c+=2;
            if(i==h)
            {
                k=i-1;
                ch=(char)(ch-2);
            }
            else
            {
                k=i;
                ch=(char)(ch-1);
            }
            for(;k>=1;k--)
            {
                System.out.print(ch--+" ");
            }
            System.out.println();
        }
    }
}
