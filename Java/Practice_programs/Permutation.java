import java.util.*;

public class Permutation
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string of length 3: ");
        String s = sc.nextLine();
        if (s.length() != 3)
        {
            System.out.println("Invalid string!");
            System.exit(0);
        }
        StringBuffer t = new StringBuffer();
        System.out.print("Permutations:");
        for (int i = 0; i < 3; i++)
        {
            char ch1 = s.charAt(i);
            t.insert(0, ch1);
            for (int j = 0; j < 3; j++)
            {
                char ch2 = s.charAt(j);
                if (ch2 == ch1)
                    continue;
                t.insert(1, ch2);
                for (int k = 0; k < 3; k++)
                {
                    char ch3 = s.charAt(k);
                    if (ch3 == ch1 || ch3 == ch2)
                        continue;
                    t.insert(2, ch3);
                    System.out.print("\t" + t);
                    t.delete(2, 3);
                }
                t.delete(1, 2);
            }
            t.delete(0, 1);
        }
        System.out.println();
        sc.close();
    }    
}
