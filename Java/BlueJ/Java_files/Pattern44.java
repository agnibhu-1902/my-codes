import java.io.*;
public class Pattern44
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int h,i,j,sp;char ch='A';
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
                    ch='A';
                    for(j=1;j<=h/2+1;j++)
                    System.out.print(ch+++" ");
                    ch-=2;
                    for(j=h/2+2;j<=h;j++)
                    System.out.print(ch--+" ");
                }
                else
                {
                    for(sp=1;sp<=h/2;sp++)
                    System.out.print("  ");
                    if(i>h/2+1)
                    {
                        ch=(char)(65+(h-i));
                        System.out.print(ch);
                    }
                    else
                    {
                        ch=(char)(64+i);
                        System.out.print(ch);
                    }
                }
                System.out.println();
            }
        }
    }
}