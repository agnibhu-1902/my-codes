/** Write a programme to:-
 * Input your name
 * Input your class
 * Input your section
 * Input your roll no.
 * Input your school's name and
 * Print them
 */
import java.util.*;
public class Personal
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String n,s,sch;int c,r;
        System.out.print("Enter your name : ");
        n=sc.next();
        System.out.print("Enter your class : ");
        c=sc.nextInt();
        System.out.print("Enter your section : ");
        s=sc.next();
        System.out.print("Enter your roll number : ");
        r=sc.nextInt();
        System.out.print("Enter the name of your school : ");
        sch=sc.next();
        System.out.println("Your name is "+n);
        System.out.println("You read in class "+c);
        System.out.println("Your section is "+s);
        System.out.println("Your roll number is "+r);
        System.out.println("The name of your school is "+sch);
    }//end of main
}//end of class
