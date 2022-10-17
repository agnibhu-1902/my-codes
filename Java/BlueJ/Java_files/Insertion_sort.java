import java.util.*;
class Insertion_sort
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array size");
        int size=sc.nextInt();
        int a[]=new int[size];
        for(int i=0;i<a.length;i++)
        {
            System.out.println("Enter a number");
            a[i]=sc.nextInt();
        }
        for(int k=1;k<a.length;k++)
        {
            int flag=a[k],j=k-1;
            while(flag<a[j])
            {
                a[j+1]=a[j];
                j=j-1;
                if(j<0)
                break;
            }
            a[j+1]=flag;
        }
        System.out.print("Sorted array :\t");
        for(int i=0;i<a.length;i++)
        {
            System.out.print(+a[i]+"\t");
        }
    }
}