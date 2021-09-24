class Bsearch
{
    public static void main(String args[])
    {
        int a[]={90,80,70,60,50,40,30,20,10};
        int no=70,lb=0,ub=a.length-1,mid,fl=0;
        while(lb<=ub)
        {
            mid=(ub+lb)/2;
            if(no>a[mid])
            ub=mid+1;
            else if(no<a[mid])
            lb=mid-1;
            else
            {
                System.out.println("No. found at "+(mid+1));
                fl=1;break;
            }
        }
        if(fl==0)
        System.out.println("No. not found");
    }
}