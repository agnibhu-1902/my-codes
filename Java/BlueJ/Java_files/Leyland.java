import java.util.*;
class Leyland
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 2 numbers");
        int m=sc.nextInt();
        int n=sc.nextInt();
        int a=1,b=1;double s=0.0;int flag=0;
        if(n<m)
        {
            System.out.println("Invalid input");
            System.exit(0);
        }
        System.out.print("Leyland nos. are ");
        for(int k=m;k<=n;k++)
        {
            for(int i=1;i<=9;i++)
            {
                for(int j=1;j<=9;j++)
                {
                    s=Math.pow(i,j)+Math.pow(j,i);
                    if(s==k)
                    {
                        System.out.print(k+"\t");
                        flag=1;break;
                    }
                    else
                    flag=0;
                }
                if(flag==1)
                break;
            }
        }
        }
    }
