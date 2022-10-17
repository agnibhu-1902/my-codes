import java.util.*;
class Lucky_number
{
    public static int ctr=2;
    static boolean isLucky(int n)//Returns true if 'n' is Lucky otherwise returns 0
    {
        int np=n;
        if(ctr>n)
        return true;
        if(n%ctr==0)
        return false;
        np-=np/ctr;
        ctr++;
        return isLucky(np);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int x=sc.nextInt();
        if(isLucky(x)==true)
        System.out.println(x+" is a Lucky number");
        else
        System.out.println(x+" is not a Lucky number");
    }
}