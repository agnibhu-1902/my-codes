class Triangle5
{
    public static void main(int h)
    {
        int i,j,p;
        for(i=1;i<=h;i++)
        {
            p=h;
            for(j=1;j<=i;j++)
            {
                System.out.print(p+" ");
                p-=1;
            }
            System.out.println();
        }
    }
}
