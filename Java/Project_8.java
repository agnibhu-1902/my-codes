import java.util.*;
class Project_8
{ 
  
    // A utility function to return maximum of two integers  
    static int max(int m, int n) 
    { 
        return (m > n) ? m : n; 
    } 
  
    // A[] represents coefficients of first polynomial  
    // B[] represents coefficients of second polynomial  
    // m and n are sizes of A[] and B[] respectively  
    static int[] add(int A[], int B[], int m, int n) 
    { 
        int size = max(m, n); 
        int sum[] = new int[size]; 
  
        // Initialize the porduct polynomial  
        for (int i = 0; i < m; i++) 
        { 
            sum[i] = A[i]; 
        } 
  
        // Take ever term of first polynomial  
        for (int i = 0; i < n; i++) 
        { 
            sum[i] += B[i]; 
        } 
  
        return sum; 
    } 
    
    // A utility function to print a polynomial  
    static void printPoly(int poly[], int n) 
    { 
        for (int i = 0; i < n; i++)
        { 
            System.out.print(poly[i]); 
            if (i != 0)
            { 
                System.out.print("x^" + i); 
            } 
            if (i != n - 1)
            { 
                System.out.print(" + "); 
            } 
        } 
    } 
  
    // Driver program to test above functions  
    public static void main(String[] args)
    { 
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter lengths of arrays A and B respectively");
        int x=sc.nextInt();
        int y=sc.nextInt();
        int A[]=new int[x];
        int B[]=new int[y];
        System.out.println("For first array");
        for(int i=0;i<A.length;i++)
        {
            System.out.println("Enter a number");
            A[i]=sc.nextInt();
        }
        System.out.println("For second array");
         for(int i=0;i<B.length;i++)
        {
            System.out.println("Enter a number");
            B[i]=sc.nextInt();
        }
        int m = A.length; 
        int n = B.length; 
        System.out.println("First polynomial is"); 
        printPoly(A, m); 
        System.out.println("\nSecond polynomial is"); 
        printPoly(B, n); 
        int sum[] = add(A, B, m, n); 
        int size = max(m, n); 
        System.out.println("\nsum polynomial is"); 
        printPoly(sum, size); 
  
    } 
} 