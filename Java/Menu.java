import java.util.*;
class Menu
{
    int base,power;double sum=0.0;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter base & power");
        base=sc.nextInt();
        power=sc.nextInt();
    }
    void series1()
    {
        double s=0.0;
        for(int i=2;i<=5;i++)
        {
            int f=1;
            for(j=1;j<=i+1;j++)
            {
                f*=j;
                s+=Math.pow(base,i)/(double)f;
            }
        }
        sum=base+s;
    }
}
    