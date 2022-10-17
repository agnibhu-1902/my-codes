import java.util.*;
class Palindrome_convert
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a sentence");
        String s=sc.nextLine();
        if(s.indexOf('.')==-1&&s.indexOf('?')==-1&&s.indexOf('!')==-1)
        {
            System.out.println("Sentence not completed");
            System.exit(0);
        }
        s=s.toUpperCase();
        String t="",x="",sen="";char ch;
        for(int i=0;i<s.length();i++)
        {
            ch=s.charAt(i);
            if(ch!=' '&&ch!='.'&&ch!='?'&&ch!='!')
            {
                t+=ch;x=ch+x;
            }
            else
            {
                if(t.equals(x)==false)
                {
                    x="";
                    for(int j=0;j<t.length()-1;j++)
                    {
                        x=t.charAt(j)+x;
                    }
                    sen=sen+" "+t.concat(x);
                }
                else
                sen=sen+" "+t;
                t="";x="";
            }
        }
        sen=sen.trim();
        System.out.println("New sentence : "+sen);
    }
}