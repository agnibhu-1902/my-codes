import java.util.*;
class Project_7
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of 1-D array");
        int p=sc.nextInt();
        int a[]=new int[p],b[]=new int[p];
        System.out.println("Enter values of first array");
        for(int i=0;i<a.length;i++)
        a[i]=sc.nextInt();
        System.out.println("Enter values of second array");
        for(int i=0;i<b.length;i++)
        b[i]=sc.nextInt();
        union(a,b);
        intersection(a,b);
        setdiff(a,b);
    }
    static void union(int a[],int b[])
    {
        int c[]=new int[a.length+b.length],x=0,flag;
        for(int i=0;i<a.length;i++)
        c[x++]=a[i];
        for(int i=0;i<b.length;i++)
        {
            flag=0;
            for(int j=0;j<a.length;j++)
            if(b[i]==a[j])
            {
                flag=1;
                break;
            }
            if(flag==0)
            c[x++]=b[i];
        }
        System.out.println("Union of two arrays");
        for(int i=0;i<x;i++)
        if(i==x-1)
        System.out.print(c[i]);
        else
        System.out.print(c[i]+", ");
        System.out.println();
    }
    static void intersection(int a[],int b[])
    {
        int z=0;
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<b.length;j++)
            if(a[i]==b[j])
            z++;
        }
        int c[]=new int[z],q=0;
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<b.length;j++)
            if(a[i]==b[j])
            c[q++]=a[i];
        }
        System.out.println("Intersection of two arrays");
        for(int i=0;i<c.length;i++)
        if(i==c.length-1)
        System.out.print(c[i]);
        else
        System.out.print(c[i]+", ");
        System.out.println();
    }
    static void setdiff(int a[],int b[])
    {
        int c[]=new int[a.length],d[]=new int[b.length];
        for(int i=0;i<c.length;i++)
        c[i]=a[i]-b[i];
        for(int i=0;i<d.length;i++)
        d[i]=b[i]-a[i];
        System.out.println("Set difference (1st set - 2nd set)");
        for(int i=0;i<c.length;i++)
        if(i==c.length-1)
        System.out.print(c[i]);
        else
        System.out.print(c[i]+", ");
        System.out.println();
        System.out.println("Set difference (2nd set - 1st set)");
        for(int i=0;i<d.length;i++)
        if(i==d.length-1)
        System.out.print(d[i]);
        else
        System.out.print(d[i]+", ");
        System.out.println();
    }
}