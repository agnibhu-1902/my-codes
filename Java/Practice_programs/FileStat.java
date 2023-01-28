import java.io.*;

public class FileStat
{
    public static void main(String args[]) throws IOException
    {
        if (args.length != 2)
        {
            System.out.println("Invalid arguments!");
            System.exit(0);
        }
        BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(args[0])));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(args[1])));
        int nl, nw, nc; String line; nl = nw = nc = 0;
        while ((line = br.readLine()) != null)
        {
            nl++;
            nc += line.length();
            line = line.trim(); line += "\n";
            for (int i = 0; i < line.length(); i++)
            {
                char ch = line.charAt(i);
                if (Character.isWhitespace(ch))
                    nw++;
            }
        }
        bw.write("Number of lines: " + nl + "\n");
        bw.write("Number of words: " + nw + "\n");
        bw.write("Number of characters: " + nc);
        br.close();
        bw.close();
    }
}
