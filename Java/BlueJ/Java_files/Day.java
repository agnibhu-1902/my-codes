import java.util.*;
class Day
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Mon(0), Tue(1), Wed(2), Thu(3), Fri(4), Sat(5), Sun(6)");
        System.out.print("Enter the day number which you prefer:");
        n=sc.nextInt();
        String days[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
        System.out.println(days[n]);
    }
}
