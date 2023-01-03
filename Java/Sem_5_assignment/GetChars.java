public class GetChars {
    public static void main(String[] args) {
        // Define a string
        String str = "Hello, World!";

        // Define a character array
        char[] charArray = new char[5];

        // Copy characters from the string into the character array using the getChars() method
        str.getChars(7, 12, charArray, 0);

        // Print the character array
        System.out.println(charArray);
    }
}

