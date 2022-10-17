import java.util.*;
class Magic_square
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array size");
        int m=sc.nextInt();
        if(m%2==0)
        {
            System.out.println("Not possible");
            System.exit(0);
        }
        int a[][]=new int[m][m];
        int k=1,i=0,j=m/2;
        while(k<=m*m)
        {
            a[i][j]=k;
            i--;j++;
            if(i<0&&j>m-1)//no row, no column
            {
                i+=2;
                j--;
            }
            if(i<0)//no row
            i=m-1;
            if(j>m-1)//no column
            j=0;
            if(a[i][j]!=0)//condition if cell is pre-occupied
            {
                i+=2;
                j--;
            }
            k++;
        }
        //printing
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
    }
}