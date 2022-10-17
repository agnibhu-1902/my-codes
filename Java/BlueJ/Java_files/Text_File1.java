import java.io.*;
class Text_File1
{
    public static void main(String args[])
    {
        try
        {
            FileWriter fw=new FileWriter("D:\\TxtFile.txt",true);
            BufferedWriter bw=new BufferedWriter(fw);
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            for(int i=0;i<5;i++)
            {
                System.out.println("Enter your name");
                String s=br.readLine();
                bw.write(s);
                bw.newLine();
            }
            bw.close();
            File file=new File("D:\\TxtFile.txt");
            BufferedReader brr=new BufferedReader(new FileReader(file));
            String line=null;
            while((line=brr.readLine())!=null)
            {
                System.out.println(line);
            }
        }catch(IOException ie){System.out.println(ie);}
    }
}