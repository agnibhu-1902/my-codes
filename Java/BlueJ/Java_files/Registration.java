//Project_18
import java.io.*;
class Registration
{
    protected String regno,state;protected int year;
    Registration()throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter registration number");
        regno=br.readLine();
        System.out.println("Enter state");
        state=br.readLine();
        System.out.println("Enter year");
        year=Integer.parseInt(br.readLine());
    }
    void display()
    {
        System.out.println("Registration number : "+regno+"\nState : "+state+"\nYear : "+year);
    }
}