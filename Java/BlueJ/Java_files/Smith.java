import java.util.*;
class Smith
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int no=sc.nextInt();
        int b=2,s=0,w=no;
        while(b<=w)
        {
            if(w%b==0)
            {
                s+=sod(b);
                w/=b;
            }
            else
            b++;
        }
        if(s==sod(no))
        System.out.println("Smith number");
        else
        System.out.println("Not a Smith number");
    }
    static int sod(int no)
    {
        int s=0,d=0;
        while(no>0)
        {
            d=no%10;
            s+=d;
            no/=10;
        }
        return s;
    }
}//end of class