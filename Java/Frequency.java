// To display the frequency table
import java.io.*;
public class Frequency
{
    public static void main(String args[])throws IOException
    {
        int i,m,a=0,b=0,c=0,d=0,e=0;
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        for(i=1;i<=40;i++)
        {
            System.out.print("Enter marks one by one : ");
            m=Integer.parseInt(in.readLine());
            if(m>=51&&m<=60)
            a++;
            if(m>=61&&m<=70)
            b++;
            if(m>=71&&m<=80)
            c++;
            if(m>=81&&m<=90)
            d++;
            if(m>=91&&m<=100)
            e++;
        }
        System.out.println("The no. of students between 51-60 = "+a);
        System.out.println("The no. of students between 61-70 = "+b);
        System.out.println("The no. of students between 71-80 = "+c);
        System.out.println("The no. of students between 81-90 = "+d);
        System.out.println("The no. of students between 91-100 = "+e);
    }
}
