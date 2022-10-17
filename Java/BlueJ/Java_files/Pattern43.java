import java.io.*;
public class Pattern43
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp;
        System.out.print("Enter height : ");
        h=Integer.parseInt(br.readLine());
        if(h%2==0)
        System.out.println("Not possible");
        else
        {
            for(i=1;i<=h;i++)
            {
                if(i==h/2+1)
                {
                    for(j=1;j<=h;j++)
                    System.out.print(j+" ");
                }
                else
                {
                    for(sp=1;sp<=h/2;sp++)
                    System.out.print("  ");
                    System.out.print(i+" ");
                }
                System.out.println();
            }
        }
    }
}
