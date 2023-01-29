import java.util.*;

class QuickSort
{
    public static void sort(int arr[])
    {
        quickSort(arr, 0, arr.length - 1);
    }
    public static void quickSort(int arr[], int low, int high)
    {
        int i = low, j = high, temp;
        int pivot = arr[(low + high) / 2];
        while (i <= j)
        {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++; j--;
            }
        }
        if (j > low)
            quickSort(arr, low, j);
        if (i < high)
            quickSort(arr, i, high);
    }
}

public class QuickSortTest
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements:");
        for (int i = 0; i < arr.length; i++)
            arr[i] = sc.nextInt();
        QuickSort.sort(arr);
        System.out.println("Sorted array:");
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);
        sc.close();
    }
}
