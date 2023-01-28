import java.io.*;

public class Palindrome
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a string: ");
        String s = br.readLine();
        StringBuffer ns = new StringBuffer();
        ns.append(s);
        ns.reverse();
        if (s.equals(ns.toString()))
            System.out.println("Palindrome string");
        else
            System.out.println("non-Palindrome string");
    }
}
