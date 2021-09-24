class Trigonometry
{
    public static void main(String args[])
    {
        int a[]={0,30,45,60,90},i,l=0,m=0,n=0,o=0;double b[]=new double[a.length],x[]=new double[a.length],y[]=new double[a.length],z[]=new double[a.length];
        for(i=0;i<a.length;i++)
        {
            b[o++]=Math.PI/(double)180*a[i];
        }
        for(i=0;i<b.length;i++)
        {
            x[l++]=Math.sin(b[i]);
            y[m++]=Math.cos(b[i]);
            z[n++]=Math.tan(b[i]);
        }
        System.out.println("\t0\t30\t45\t60\t90");
        System.out.println();
        System.out.print("sin");
        for(i=0;i<x.length;i++)
        System.out.print((float)x[i]+"\t");
        System.out.println();
        System.out.print("cos");
        for(i=0;i<y.length;i++)
        System.out.print((float)y[i]+"\t");
        System.out.println();
        System.out.print("tan");
        for(i=0;i<z.length;i++)
        System.out.print((float)z[i]+"\t");
    }
}