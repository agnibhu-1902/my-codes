import java.util.*;
class Fruit
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter the first letter of a fruit:");
        n=sc.next().trim().charAt(0);
        if(n=='a'||n=='A')
        {
            System.out.println("Apple");
        }
        else if(n=='b'||n=='B')
        {
            System.out.println("Banana");
        }
        else if(n=='c'||n=='C')
        {
            System.out.println("Cherry");
        }
        else
        {
            System.out.println("Unavailable fruit");
        }
    }//end of main
}//end of class
