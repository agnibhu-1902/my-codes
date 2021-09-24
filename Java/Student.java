//Project_13
import java.util.*;
class Student
{
    int roll,marks;
    Student()
    {
        roll=marks=0;
    }
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter roll number");
        roll=sc.nextInt();
        System.out.println("Enter marks");
        marks=sc.nextInt();
    }
    void display()
    {
        System.out.println("Roll : "+roll+"\nMarks : "+marks);
    }
    Student compare(Student s1)
    {
        if(this.marks>s1.marks)
        return this;
        else
        return s1;
    }
    void main()
    {
        Student z[]=new Student[5];
        for(int i=0;i<z.length;i++)
        {
            z[i]=new Student();
            z[i].input();
            z[i].display();
        }
        int max=z[0].marks;int pos=0;
        for(int i=1;i<z.length;i++)
        {
            if(z[i].marks>max)
            {
                max=z[i].marks;
                pos=i;
            }
        }
        System.out.println("\nHighest");
        z[pos].display();
    }
}	
        