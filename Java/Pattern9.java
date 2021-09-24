import java.io.*;
public class Pattern9
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,s;
        System.out.print("Enter height:");
        h=Integer.parseInt(br.readLine());
        for(i=1;i<=h;i++)
        {
            s=0;
            for(j=1;j<=i;j++)
            {
                s+=j;
                System.out.print(j+" ");
            }
            System.out.println(" "+s);
        }
    }
}
