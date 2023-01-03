import java.util.Scanner;

public class Compare {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Accept the first string
        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();

        // Accept the second string
        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        // Compare the strings using the compareTo() method
        int result = str1.compareTo(str2);
        if (result == 0) {
            System.out.println("The strings are equal.");
        } else if (result < 0) {
            System.out.println("The first string comes before the second string.");
        } else {
            System.out.println("The first string comes after the second string.");
        }
        // Close the Scanner object
        scanner.close();
    }
}
