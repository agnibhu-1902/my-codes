/* After division by 9 if 1 will be the remainder then the number is a magic number */ 
class Magic
{
    public static void main(int n)
    {
        int i,d;
        for(i=1;i<=n;i++)
        {
            d=i%9;
            if(d==1)
            System.out.println(i);
        }
    }
}

        