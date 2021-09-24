import java.io.*;
public class Binary_search
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int a[]=new int[10],i;
        for(i=0;i<a.length;i++)
        {
            System.out.print("Enter a number : ");
            a[i]=Integer.parseInt(br.readLine());
        }
        System.out.println("Enter number to search");
        int no=Integer.parseInt(br.readLine());
        int mid,lb=0,ub=a.length-1,flag=0;
        while(lb<=ub)
        {
            mid=(ub+lb)/2;
            if(no<a[mid])
            lb=mid+1;
            else if(no>a[mid])
            ub=mid-1;
            else
            {
                System.out.println(no+" found at "+(mid+1));
                flag=1;break;
            }
            if(flag==0)
            System.out.println(no+" not found");
        }
    }
}
