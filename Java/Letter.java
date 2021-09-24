import java.util.*;
public class Letter
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        double wt;double ch=0.0;char type;
        System.out.print("Enter weight:");
        wt=sc.nextInt();
        System.out.print("Enter type(I/i or F/f):");
        type=sc.next().trim().charAt(0);
        switch(type)
        {
            case 'I':
            case 'i':
                    if(wt<=10)
                    {
                        ch=wt*0.5;
                    }
                    else
                    {
                        ch=wt*1;
                    }
                    break;
            case 'F':
            case 'f':
                    if(wt<=10)
                    {
                        ch=wt*2;
                    }
                    else
                    {
                        ch=wt*5;
                    }
                    break;
        }
        System.out.println("Charge="+ch);
    }//end of main
}//end of class
