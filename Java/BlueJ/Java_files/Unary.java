import java.io.*;
public class Unary
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        int a,b,c,d;
        System.out.println("Enter 4 numbers");
        a=Integer.parseInt(in.readLine());
        b=Integer.parseInt(in.readLine());
        c=Integer.parseInt(in.readLine());
        d=Integer.parseInt(in.readLine());
        d+=++a*--b/++c+(a+b+c);
        System.out.println(d);
    }
}
