public class Department
{
    public static void main(String args[])
    {
        final int DEPT_SIZE=3,STD_SIZE=2,SUB_SIZE=3;
        int dept[][][] = {{{76,79,67},{84,86,85}},{{98,93,94},{91,89,87}},{{86,54,89},{91,90,82}}};
        for(int i=0;i<DEPT_SIZE;i++)
        {
            System.out.println("Department "+(i+1)+":");
            for(int j=0;j<STD_SIZE;j++)
            {
                System.out.print("Student "+(j+1)+": ");
                int sum=0;
                for(int k=0;k<SUB_SIZE;k++)
                {
                    System.out.print(dept[i][j][k]+"\t");
                    sum+=dept[i][j][k];
                }
                System.out.println("\tTotal: "+sum);
            }
        }
    }
}
