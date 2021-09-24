import java.io.*;
public class Employee
{
    String name;double basic;char grade; int age;
    void accept()throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter name");
        name=br.readLine();
        System.out.println("Enter age");
        age=Integer.parseInt(br.readLine());
        System.out.println("Enter basic");
        basic=Double.parseDouble(br.readLine());
        System.out.println("Enter grade");
        grade=(char)(br.read());
        double da,hra,pf,np,gp;
        da=25/(double)100*basic;
        hra=15/(double)100*basic;
        pf=8.33/(double)100*basic;
        np=basic+da+hra;
        gp=np-pf;
        System.out.println("Dearness Allowance = "+da);
        System.out.println("House Rent Allowance = "+hra);
        System.out.println("Provident fund = "+pf);
        System.out.println("Net Pay = "+np);
        System.out.println("Gross Pay = "+gp);
    }
    void display()throws IOException
    {
        accept();
        System.out.println("Name = "+name);
        System.out.println("Basic = "+basic);
        System.out.println("Grade = "+grade);
        System.out.println("Age = "+age);
    }
}
