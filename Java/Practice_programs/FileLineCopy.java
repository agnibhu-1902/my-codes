import java.io.*;

public class FileLineCopy
{
    public static void main(String args[]) throws IOException
    {
        if (args.length < 2)
        {
            System.out.println("Enter valid arguments.");
            System.exit(0);
        }
        BufferedReader br = new BufferedReader(new FileReader(args[0]));
        BufferedWriter fw = new BufferedWriter(new FileWriter(args[1]));
        String str;
        while ((str = br.readLine()) != null)
            fw.write(str + "\n");
        br.close();
        fw.close();
    }
}
