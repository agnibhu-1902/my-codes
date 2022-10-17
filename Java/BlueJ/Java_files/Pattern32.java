import java.io.*;
public class Pattern32
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c;char ch;
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
            ch='A';
            for(j=1;j<=i;j++)
            {
                System.out.print(ch+++" ");
            }
            ch=(char)(64+i);
            for(j=1;j<=i;j++)
            {
                System.out.print(ch--+" ");
            }
            System.out.println();
        }
    }
}
