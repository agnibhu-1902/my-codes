import java.io.*;

public class RemoveConsonants
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a string: ");
        String s = br.readLine();
        String t = "AEIOUaeiou"; String ns = "";
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);
            if (!Character.isAlphabetic(ch))
            {
                ns += ch;
                continue;
            }
            if (t.indexOf(ch) == -1)
                continue;
            ns += ch;
        }
        System.out.println("New string: " + ns);
    }
}
