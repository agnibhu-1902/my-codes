class Dummy
{
    private static int counter = 0;
    public Dummy()
    {
        counter++;
    }
    public static int getCounter()
    {
        return counter;
    }
}

public class Static
{
    public static void main(String args[])
    {
        new Dummy();
        new Dummy();
        new Dummy();
        System.out.println("Number of objects: " + Dummy.getCounter());
    }
}