class GoodMorning implements Runnable
{
    public void run()
    {
        try
        {
            for (int i = 0; i < 5; i++)
            {
                System.out.println("Good morning!");
                Thread.sleep(1000);
            }
        }
        catch (Exception e)
        {
            System.out.println("Thread Interrupted!");
        }
    }
}

class Hello implements Runnable
{
    public void run()
    {
        try
        {
            for (int i = 0; i < 5; i++)
            {
                System.out.println("Hello!");
                Thread.sleep(2000);
            }
        }
        catch (Exception e)
        {
            System.out.println("Thread Interrupted!");
        }
    }
}

class Welcome implements Runnable
{
    public void run()
    {
        try
        {
            for (int i = 0; i < 5; i++)
            {
                System.out.println("Welcome!");
                Thread.sleep(3000);
            }
        }
        catch (Exception e)
        {
            System.out.println("Thread Interrupted!");
        }
    }
}

public class MultiThread
{
    public static void main(String args[])
    {
        GoodMorning gm = new GoodMorning();
        Hello h = new Hello();
        Welcome w = new Welcome();

        Thread t1 = new Thread(gm);
        Thread t2 = new Thread(h);
        Thread t3 = new Thread(w);

        t1.start();
        t2.start();
        t3.start();
    }
}