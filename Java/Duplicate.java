import java.util.*;
class Duplicate
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        long n=sc.nextLong();
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<i;k++)
            {
               