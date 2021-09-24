import java.io.*;
class Student_details
{
    public static void main(String[] args)throws IOException
    {
            FileWriter writer = new FileWriter("D:\\student.txt", true);
            BufferedWriter bw = new BufferedWriter(writer);
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            String name="", address="", phone="";
            int marks;
            bw.write("NAME"+"\t"+"ADDRESS"+"\t"+"MARKS"+"\t"+"PHONE NUMBER");
            bw.newLine();
            for(int i=1;i<=2;i++)
            {
                System.out.println("Enter name of student "+i);
                name=br.readLine();
                System.out.println("Enter address of student "+i);
                address=br.readLine();
                System.out.println("Enter marks of student "+i);
                marks=Integer.parseInt(br.readLine());
                System.out.println("Enter phone number of student "+i);
                phone=br.readLine();
                bw.write(name+"\t"+address+"\t"+marks+"\t"+phone);
                bw.newLine();
            }
            bw.close();
            File file=new File("D:\\student.txt");
            BufferedReader brr=new BufferedReader(new FileReader(file));
            String line=null;
            while((line=brr.readLine())!=null)
            {
                System.out.println(line);
            }
        } 
    }
