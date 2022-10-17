import java.io.*;
public class Pattern28
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp,c;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        c=0;
        for(i=1;i<=h;i++)
        {
            char ch=(char)(64+i);
            for(sp=1;sp<=c;sp++)
            {
                System.out.print("  ");
            }
            c++;
            for(j=i;j<=h;j++)
            {
                System.out.print(ch+++" ");
            }
            ch--;
            for(j=i+1;j<=h;j++)
            {
                System.out.print(--ch+" ");
            }
            System.out.println();
        }
    }
}
