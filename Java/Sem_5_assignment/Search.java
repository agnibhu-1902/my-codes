import java.util.Scanner;

public class Search {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Accept the target string
        System.out.print("Enter the target string: ");
        String str = scanner.nextLine();

        // Accept the string to be searched
        System.out.print("Enter the string to be searched: ");
        String searchString = scanner.nextLine();

        // Search for the string in the target string
        int index = str.indexOf(searchString);

        if (index == -1) {
            System.out.println("The string was not found.");
        } else {
            System.out.println("The string was found at index " + index + ".");
        }
        // Close the Scanner object
        scanner.close();
    }
}
