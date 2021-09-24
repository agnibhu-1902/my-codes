//Project_14
import java.util.*;
class Circle
{   double radius;
    double area;
    Circle()
    {
        radius=0.0;
        area=0.0;
    }

    void display()
    {
        Scanner sc=new  Scanner(System.in);
        System.out.println("Enter radius");// Taking input in data members
        radius=sc.nextInt();
        area=Math.PI*radius*radius;//calulating area and storing in data member
        System.out.println("Radius is "+radius+" units");
        System.out.println("Area is "+area+" sq.units");
    }

    Circle compare(Circle c)
    { 
        if(this.area>c.area)//returns circle with greatest area
            return this;
        else     
            return c;
    }

    void main()
    {  
        Circle a[]=new Circle[5];//array of objects
        for(int i=0;i<a.length;i++)
        {
            a[i]= new Circle();
        }
        arrange(a);//Sorting in ascending order of area
    }

    void arrange(Circle a[]) 
    {
        for(int i=0;i<a.length-1;i++)//Bubble Sort
        { 
            for(int j=0;j<a.length-i-1;j++)
            { 
                if(a[j].equals(a[j].compare(a[j+1])))
                {
                    Circle temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        System.out.println("Increasing order of area");   
        for(int i=0;i<a.length;i++)
        {
            a[i].display();
        }
    }
}
