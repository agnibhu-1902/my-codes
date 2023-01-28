class MyPoint
{
    private int x, y;
    public MyPoint()
    {
        x = y = 0;
    }
    public MyPoint(int x, int y)
    {
        this.x = x; this.y = y;
    }
    public void setXY(int x, int y)
    {
        this.x = x; this.y = y;
    }
    public int[] getXY()
    {
        int a[] = new int[2];
        a[0] = x; a[1] = y;
        return a;
    }
    public String toString()
    {
        return "(" + x + ", " + y + ")";
    }
    public double distance(int x, int y)
    {
        return Math.sqrt(Math.pow(y - this.y, 2) + Math.pow(x - this.x, 2));
    }
}

public class TestMyPoint
{
    public static void main(String args[])
    {
        MyPoint m = new MyPoint();
        MyPoint m1 = new MyPoint(6, 9);
        m.setXY(3, 5);
        int b[] = m.getXY();
        System.out.println(m1);
        System.out.println("Value of x and y is: "+b[0]+" and "+ b[1]);
        String t=m.toString();
        System.out.println(t);
        double z=m.distance(8, 9);
        System.out.println("The distance between x and y is: "+z);
    }
}