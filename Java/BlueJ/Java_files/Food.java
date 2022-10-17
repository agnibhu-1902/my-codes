/* Write a programme to print a menu of food (1.Chinese, 2.Mughlai, 3.South Indian, 4.No order). Create an infinite loop which will ask option again and again and will print 3 dishes of the respective type. If option is 4, programme will stop. */
import java.io.*;
public class Food
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read=new InputStreamReader(System.in);
        BufferedReader in=new BufferedReader(read);
        int c;
        System.out.println("Menu");
        System.out.println();
        while(true)
        {
            System.out.println("1.Chinese");
            System.out.println("2.Mughlai");
            System.out.println("3.South Indian");
            System.out.println("4.No order");
            System.out.print("Enter choice : ");
            c=Integer.parseInt(in.readLine());
            switch(c)
            {                
                case 1:
                        System.out.println();
                        System.out.println("Chowmin, chilli chicken, manchurian");
                        System.out.println();
                        break;
                case 2:
                        System.out.println();
                        System.out.println("Biryani, mughlai paratha, tandoori chicken");
                        System.out.println();
                        break;
                case 3:
                        System.out.println();
                        System.out.println("Idli, dosa, sambhar");
                        System.out.println();
                        break;
                case 4:
                        System.out.println();
                        System.out.println("Program terminated");
                        System.exit(1);
                default:
                        System.out.println(); 
                        System.out.println("Invalid option");
                        System.out.println();
            }
        }
    }//end of main
}//end of class
