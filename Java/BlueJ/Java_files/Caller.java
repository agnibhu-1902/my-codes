import MyPack.*;
import java.util.*;
class Caller
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=sc.nextInt();
        A obj1=new A();
        obj1.isArmstrong(n);
        B obj2=new B();
        obj2.isSpecial(n);
    }
}