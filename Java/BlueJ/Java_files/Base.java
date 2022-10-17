import java.util.*;
class Base
{
    protected int m1,m2;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter m1 & m2");
        m1=sc.nextInt();
        m2=sc.nextInt();
    }
    void display()
    {
        System.out.println(m1);
        System.out.println(m2);
    }
}