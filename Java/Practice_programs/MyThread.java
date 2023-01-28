class A extends Thread
{
    public void run()
    {
        for (int i = 1; i <= 5; i++)
        {
            try
            {
                System.out.println("From thread A.");
                Thread.sleep(1000);
            }
            catch (Exception e)
            {
                System.out.println(e);
            }
        }
    }
}

class B extends Thread
{
    public void run()
    {
        for (int i = 1; i <= 5; i++)
        {
            try
            {
                System.out.println("From thread B.");
                Thread.sleep(1000);
            }
            catch (Exception e)
            {
                System.out.println(e);
            }
        }
    }
}

class C extends Thread
{
    public void run()
    {
        for (int i = 1; i <= 5; i++)
        {
            try
            {
                System.out.println("From thread C.");
                Thread.sleep(1000);
            }
            catch (Exception e)
            {
                System.out.println(e);
            }
        }
    }
}

public class MyThread
{
    public static void main(String args[])
    {
        A a = new A();
        B b = new B();
        C c = new C();
        a.start();
        b.start();
        c.start();
    }
}