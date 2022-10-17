import java.io.*;
class Binary_File1
{
    public static void main(String args[])
    {
        try
        {
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            FileOutputStream fout=new FileOutputStream("D:\\emp.dat",true);
            DataOutputStream dout=new DataOutputStream(fout);
            for(int i=0;i<5;i++)
            {
                System.out.println("Enter name");
                String s=br.readLine();
                System.out.println("Enter salary");
                double x=Double.parseDouble(br.readLine());
                dout.writeUTF(s);dout.writeDouble(x);
            }
            fout.close();
            dout.close();
        }
        catch(IOException io)
        {
            System.out.println(io);
        }
        boolean EOF=false;
        try
        {
            File fin=new File("D:\\emp.dat");
            DataInputStream din=new DataInputStream(new FileInputStream(fin));
            while(!EOF)
            {
                try
                {
                    String name=din.readUTF();
                    double salary=din.readDouble();
                    System.out.println(name+"  "+salary);
                }
                catch(EOFException e1)
                {
                    System.out.println(e1.getMessage());
                    System.out.println("End of file");
                    EOF=true;
                }
            }
            din.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}