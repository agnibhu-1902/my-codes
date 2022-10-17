import java.util.*;
class Tic_tac_toe_1_user
{
    public static void main(String args[])
    {
        System.out.println("Welcome to tic-tac-toe!");
        System.out.println();
        Scanner sc=new Scanner(System.in);
        String a[][]=new String[3][3];
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[i].length;j++)
            {
                a[i][j]=". ";
                System.out.print(a[i][j]);
            }
            System.out.println();
        }
        int w,x,y,z;
        System.out.println();
        System.out.println("Row numbers : 1, 2, 3");
        System.out.println("Column numbers : 1, 2, 3");
        System.out.println();
        while(true)
        {
            System.out.println();
            System.out.println("User input\n");
            System.out.println("Enter row");
            w=sc.nextInt();w--;
            System.out.println("Enter column");
            x=sc.nextInt();x--;
            System.out.println();
            if(a[w][x]==". ")
            a[w][x]="X ";
            else
            {
                System.out.println("Position preoccupied");
                continue;
            }
            for(int i=0;i<a.length;i++)
            {
                for(int j=0;j<a[i].length;j++)
                {
                    System.out.print(a[i][j]);
                }
                System.out.println();
            }
            int c=0,d=0;System.out.println();
            if(a[w][c]=="X "&&a[w][c+1]=="X "&&a[w][c+2]=="X ")
            {
                System.out.println("You won!");
                System.exit(0);
            }
            if(a[d][x]=="X "&&a[d+1][x]=="X "&&a[d+2][x]=="X ")
            {
                System.out.println("You won!");
                System.exit(0);
            }
            int q=1;
            {
                if((a[q-1][q-1]=="X "&&a[q+1][q+1]=="X "&&a[q][q]=="X ")||(a[q-1][q+1]=="X "&&a[q+1][q-1]=="X "&&a[q][q]=="X "))
                {
                    System.out.println("You won!");
                    System.exit(0);
                }
            }
            int l=1;
            for(int i=0;i<a.length;i++)
            {
                for(int j=0;j<a[i].length;j++)
                {
                    if(a[i][j]!=". ")
                    l++;
                    if(l==10)
                    {
                        System.out.println("\nGame drawn");
                        System.exit(0);
                    }
                }
            }
            for(;;)
            {
                System.out.println();
                System.out.println("Computer input");
                do
                {
                    double g=Math.random();double t=Math.random();
                    y=(int)(g*10);z=(int)(t*10);
                    if((y<1||y>3)||(z<1||z>3))
                    continue;
                    else
                    break;
                }while(true);
                System.out.println("\nRow : "+y+"\nColumn : "+z+"\n");
                y--;z--;
                if(a[y][z]==". ")
                {
                    a[y][z]="O ";
                    break;
                }
                else
                {
                    System.out.println("Position preoccupied");
                    continue;
                }
            }
            for(int i=0;i<a.length;i++)
            {
                for(int j=0;j<a[i].length;j++)
                {
                    System.out.print(a[i][j]);
                }
                System.out.println();
            }
            int e=0,f=0;
            if(a[y][e]=="O "&&a[y][e+1]=="O "&&a[y][e+2]=="O ")
            {
                System.out.println("Computer won!");
                System.exit(0);
            }
            if(a[f][z]=="O "&&a[f+1][z]=="O "&&a[f+2][z]=="O ")
            {
                System.out.println("Computer won!");
                System.exit(0);
            }
            int p=1;
            {
                if((a[p-1][p-1]=="O "&&a[p+1][p+1]=="O "&&a[p][p]=="O ")||(a[p-1][p+1]=="O "&&a[p+1][p-1]=="O "&&a[p][p]=="O "))
                {
                    System.out.println("Computer won!");
                    System.exit(0);
                }
            }
            l=1;
            for(int i=0;i<a.length;i++)
            {
                for(int j=0;j<a[i].length;j++)
                {
                    if(a[i][j]!=". ")
                    l++;
                    if(l==10)
                    {
                        System.out.println("Game drawn");
                        System.exit(0);
                    }
                }
            }
        }
    }
}