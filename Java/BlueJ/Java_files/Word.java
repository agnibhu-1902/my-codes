import java.io.*;
public class Word
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        int n;
        System.out.print("Enter a number(0-9):");
        n=Integer.parseInt(in.readLine());
        switch(n)
        {
            case 1:
                System.out.println("One");
                break;
            case 2:
                System.out.println("Two");
                break;
            case 3:
                System.out.println("Three");
                break;
            case 4:
                System.out.println("Four");
                break;
            case 5:
                System.out.println("Five");
                break;
            case 6:
                System.out.println("Six");
                break;
            case 7:
                System.out.println("Seven");
                break;
            case 8:
                System.out.println("Eight");
                break;
            case 9:
                System.out.println("Nine");
                break;
            case 0:
                System.out.println("Zero");
                break;
            default:
                System.out.println("Invalid number");
        }
    }
}
