class Sort
{
    static void main()
    {
        String s="ab abc abcd",t="";int c=0;
        s=s.trim();s=s+" ";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
            t=t+ch;
            else
            {
                t="";c++;
            }
        }
        String x[]=new String[c];int o=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
            t=t+ch;
            else
            {
                x[o++]=t;t="";
            }
        }
        for(int i=0;i<x.length-1;i++)
        {
            for(int j=0;j<x.length-i-1;j++)
            if(x[j].length()<x[j+1].length())
            {
                String temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
            for(int k=0;k<x.length;k++)
            System.out.println(x[k]);
        }
    }
}