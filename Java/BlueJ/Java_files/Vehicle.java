import java.io.*;
import java.util.*;
class Vehicle extends Registration
{
    String owner,address;long phone;double fine_to_give;
    Vehicle()throws IOException
    {
        super();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter owner name");
        owner=sc.nextLine();
        System.out.println("Enter address");
        address=sc.nextLine();
        System.out.println("Enter fine");
        fine_to_give=sc.nextDouble();
        System.out.println();
    }
    void display()
    {
        super.display();
        System.out.println("Owner name : "+owner+"\nAddress : "+address);
        if(fine_to_give<=500)
        fine_to_give-=2/(double)100*fine_to_give;
        else if(fine_to_give>=501&&fine_to_give<=1000)
        fine_to_give-=5/(double)100*fine_to_give;
        else if(fine_to_give>1000)
        fine_to_give-=7/(double)100*fine_to_give;
        System.out.println("Fine (after rebate) : "+fine_to_give);
        System.out.println();
    }
    void main()throws IOException
    {
        Vehicle v1=new Vehicle();
        v1.display();
        Vehicle v2=new Vehicle();
        v2.display();
        Vehicle v3=new Vehicle();
        v3.display();
        Vehicle v4=new Vehicle();
        v4.display();
        Vehicle v5=new Vehicle();
        v5.display();
    }
}