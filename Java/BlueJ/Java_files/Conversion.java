import java.util.*;
class Conversion
{
    int n;
    void main()
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter number of characters to be entered");
        n=sc.nextInt();
        String arr[]=new String[n];
        System.out.println("Enter the characters in reverse ASCII value");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.next();
        }
        System.out.print("Original name:"+reverse(arr));
    }
    String reverse(String str[])//to reverse the ASCII code and return the text
    {
        String rev="";
        for(int i=0;i<n;i++)
        {
            String t="";
            for(int j=0;j<str[i].length();j++)
            {
                char ch=str[i].charAt(j);
                t=ch+t;
            }
            int z=Integer.parseInt(t);char x=(char)z;
            rev=rev+x;
            t="";
        }
        return rev;
    }
}
