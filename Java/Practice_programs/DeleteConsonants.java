import java.util.*;

public class DeleteConsonants
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        StringBuffer sb = new StringBuffer(sc.nextLine());
        String t = "AEIOUaeiou"; int len = sb.length();
        for (int i = 0; i < len;)
        {
            if (!Character.isAlphabetic(sb.charAt(i)))
            {
                    i++;
                    continue;
            }
            if (t.indexOf(sb.charAt(i)) == -1)
            {
                sb.deleteCharAt(i);
                len--;
            }
            else
                i++;
        }
        System.out.println("Modified string: " + sb);
        sc.close();
    }
}