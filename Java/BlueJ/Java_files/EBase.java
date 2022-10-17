class EBase
{
    int minbase(int p)//calculating minimum base
    {
        int mx=0;
        while(p>0)
        {
            int d=p%10;
            if(d>mx)
            mx=d;
            p=p/10;
        }
        return (mx+1);
    }
    int con(int p,int b)//converting the number
    {
        int s=0,k=0;
        while(p>0)
        {
            int d=p%10;
            s=s+(d*((int)(Math.pow(b,k))));
            k=k+1;
            p=p/10;
        }
        return s;
    }
    void main()//doing the complete task or the program
    {
        int x=36,y=42;
        int mb1=minbase(x);
        int mb2=minbase(y);
        for(int i=mb1;i<=10;i++)
        {
            int dec1=con(x,i);
            for(int j=mb2;j<=10;j++)
            {
                int dec2=con(y,j);
                if(dec1==dec2)
                {
                    System.out.println(x+"("+i+")="+y+"("+j+")");
                    return;
                }
            }
        }
        System.out.println("Unequal");
    }
}
