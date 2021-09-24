import java.io.*;
public class Pattern39
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int l,b,i,j;
        System.out.print("Enter length:");
        l=Integer.parseInt(br.readLine());
        System.out.print("Enter breadth:");
        b=Integer.parseInt(br.readLine());
        for(i=1;i<=b;i++)
        {
            for(j=1;j<=l;j++)
            {
                if(i==1||i==b||j==1||j==l)
                {
                    System.out.print("* ");
                }
                else
                {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
