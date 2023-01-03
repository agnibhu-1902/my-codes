import java.util.Scanner;

// Define a class to represent an employee
class Employee {
    // Declare instance variables
    private String name;
    private int age;
    private double salary;

    // Define a constructor to initialize the employee details
    public Employee(String name, int age, double salary) {
        this.name = name;
        this.age = age;
        this.salary = salary;
    }

    // Define a method to display the employee details
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
    }
}

// Define a class to accept and display employee details
class EmployeeDetails {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Accept and display the details of 3 employees
        for (int i = 0; i < 3; i++) {
            // Accept employee name, age, and salary
            System.out.print("Enter employee name: ");
            String name = scanner.nextLine();
            System.out.print("Enter employee age: ");
            int age = scanner.nextInt();
            System.out.print("Enter employee salary: ");
            double salary = scanner.nextDouble();
            scanner.nextLine();  // Consume the newline character

            // Create an Employee object and initialize it with the details
            Employee employee = new Employee(name, age, salary);

            // Display the employee details
            employee.display();
            System.out.println();  // Print a blank line
        }
        // Close the Scanner object
        scanner.close();
    }
}
