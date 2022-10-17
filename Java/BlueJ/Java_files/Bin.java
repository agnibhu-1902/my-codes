class Bin
{
    void rec(int n)
    {
        int s=0;
        if(n>0)
        {
            int d=n%2;
            rec(n/2);
            s=s*10+d;
            System.out.print(s);
        }
    }
}