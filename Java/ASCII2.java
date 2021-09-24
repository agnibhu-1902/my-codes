import java.util.*;
import java.io.*;
class ASCII2
{
    void main()throws IOException
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter word length");
        int n=sc.nextInt();
        String s[]=new String[n];
        for(int i=0;i<s.length;i++)
        {
            System.out.println("Enter ASCII code");
            s[i]=sc.next();
        }
        System.out.println(reverse(s));
    }
    String reverse(String a[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));String g="";
        for(int i=0;i<a.length;i++)
        {
            int z=Integer.parseInt(a[i]);int t=z,s=0,d;
            while(t>0)
            {
                d=t%10;
                s=s*10+d;
                t/=10;
            }
            g=g+(char)s;
        }
        return g;
    }
}