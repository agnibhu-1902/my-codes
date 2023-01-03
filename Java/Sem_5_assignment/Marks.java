import java.util.Scanner;

public class Marks {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Define a 3D array representing the marks of 3 departments, each with 2 students, each with 3 subjects
        int[][][] marks = new int[3][2][3];

        // Accept the marks of the students
        for (int i = 0; i < marks.length; i++) {
            for (int j = 0; j < marks[i].length; j++) {
                for (int k = 0; k < marks[i][j].length; k++) {
                    System.out.print("Enter marks for department " + (i + 1) + ", student " + (j + 1) + ", subject " + (k + 1) + ": ");
                    marks[i][j][k] = scanner.nextInt();
                }
            }
        }

        // Calculate the total marks of each student
        for (int i = 0; i < marks.length; i++) {
            for (int j = 0; j < marks[i].length; j++) {
                int total = 0;
                for (int k = 0; k < marks[i][j].length; k++) {
                    total += marks[i][j][k];
                }
                System.out.println("Total marks for department " + (i + 1) + " and student " + (j + 1) + ": " + total);
            }
        }
        // Close the Scanner object
        scanner.close();
    }
}