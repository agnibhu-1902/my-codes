import java.util.*;
class Nearest_twin_prime
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int no=sc.nextInt();
        int sum=0,max=0,j,k;int p=0,q=0;
        for(int i=1;i<=no;i++)
        {
            j=i;k=i+2;
            if(isPrime(j)==true&&isPrime(k)==true)
            {
                p=j;q=k;
            }
        }
        System.out.println("Nearest twin prime numbers are "+p+" & "+q);
    }
    static boolean isPrime(int n)
    {
        int c=0;
        for(int i=1;i<=n;i++)
        if(n%i==0)
        c++;
        if(c==2)
        return true;
        else
        return false;
    }
}