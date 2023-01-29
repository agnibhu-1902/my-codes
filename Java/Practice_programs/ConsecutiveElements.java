public class ConsecutiveElements
{
    public static void sort(int a[])
    {
        for (int i = 0; i < a.length - 1; i++)
        {
            int min= a[i], pos = i;
            for (int j = i + 1; j < a.length; j++)
                if (a[j] < min)
                {
                    min = a[j]; pos = j;
                }
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }
    public static void main(String args[])
    {
        int count = 1, max = 0, a[] = {49, 1, 3, 200, 2, 4, 70, 5};
        sort(a);
        for (int i = 0; i < a.length - 1; i++)
        {
            if (a[i] + 1 == a[i + 1])
            {
                count++;
                if (count > max)
                    max = count;
            }
        }
        System.out.println("Maximum consecutive elements: " + max);
    }
}
