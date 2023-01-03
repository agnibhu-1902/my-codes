import java.util.Scanner;

public class Methods {
    // Method (i) without having parameters and return type
    public static void method1() {
        System.out.println("This is method 1.");
    }

    // Method (ii) without parameter but with return type
    public static String method2() {
        return "This is method 2.";
    }

    // Method (iii) with parameter but without return type
    public static void method3(int x) {
        System.out.println("This is method 3. The value of x is " + x + ".");
    }

    // Method (iv) with parameter and with return type
    public static int method4(int x) {
        return x * x;
    }

    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Call method 1
        method1();

        // Call method 2
        String result = method2();
        System.out.println(result);

        // Accept the value of x for method 3
        System.out.print("Enter the value of x for method 3: ");
        int x = scanner.nextInt();

        // Call method 3
        method3(x);

        // Accept the value of x for method 4
        System.out.print("Enter the value of x for method 4: ");
        x = scanner.nextInt();

        // Call method 4
        int squared = method4(x);
        System.out.println("The square of " + x + " is " + squared + ".");
        // Close the Scanner object
        scanner.close();
    }
}
