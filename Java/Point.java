import java.io.*;
class Point
{
    float x,y;
    void getpoint(float a,float b)
    {
        x=a;y=b;
    }
    float distance(Point p)
    {
        float d=(float)Math.sqrt(Math.pow(p.x-x,2)-Math.pow(p.y-y,2));
        return d;
    }
    Point midpoint(Point p)
    {
        Point mp=new Point();
        mp.x=(this.x+p.x)/2;
        mp.y=(this.y+p.y)/2;
        return mp;
    }
    void display()
    {
        System.out.println("Midpoint");
        System.out.println(x);
        System.out.println(y);
    }
    void create()throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        float g,h,k,l;
        System.out.println("Enter 2 numbers (for 1st object)");
        g=Float.parseFloat(br.readLine());
        h=Float.parseFloat(br.readLine());
        System.out.println("Enter 2 numbers (for 2nd object)");
        k=Float.parseFloat(br.readLine());
        l=Float.parseFloat(br.readLine());
        Point p1=new Point();
        Point p=new Point();
        p1.getpoint(g,h);
        p.getpoint(k,l);
        float x=p1.distance(p);
        System.out.println("Distance="+x);
        Point p2=p1.midpoint(p);
        p2.display();
    }
}