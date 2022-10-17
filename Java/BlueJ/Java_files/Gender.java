import java.util.*;
class Gender
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        char n;
        System.out.print("Enter your gender:");
        n=sc.next().trim().charAt(0);
        switch(n)
        {
            case 'm':
            case 'M':
            System.out.println("Male");
            break;
            case 'f':
            case 'F':
            System.out.println("Female");
            break;
            default:
            System.out.println("Invalid gender");
            break;
        }
    }
}

            