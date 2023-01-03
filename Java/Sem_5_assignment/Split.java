import java.util.Scanner;

public class Split {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Accept the string to be split
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        // Split the string into pieces using the split() method
        String[] pieces = str.split(" ");

        // Print the pieces
        for (String piece : pieces) {
            System.out.println(piece);
        }
        // Close the Scanner object
        scanner.close();
    }
}
