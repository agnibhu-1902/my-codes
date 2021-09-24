import java.io.*;
public class Pattern23
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,l,b;
        System.out.print("Enter length:");
        l=Integer.parseInt(br.readLine());
        System.out.print("Enter breadth:");
        b=Integer.parseInt(br.readLine());
        for(i=1;i<=b;i++)
        {
            for(j=1;j<=l;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
