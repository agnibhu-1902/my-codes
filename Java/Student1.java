class Student1
{
    String name;int roll,marks;
    void input()
    {
        name="Agnibhu";
        roll=15;marks=80;
    }
    void show()
    {
        System.out.println(name);
        System.out.println(roll);
        System.out.println(marks);
    }
    void create()
    {
        Student1 z[]=new Student1[10];
        for(int i=0;i<z.length;i++)
        {
            Student1 x=new Student1();
            z[i].input();
            z[i].show();
        }
        highest(z);
    }
    Student1 highest(Student1 st[])
    {
        int max=st[0].marks;int pos=0;
        for(int i=1;i<st.length;i++)
        {
            if(st[i].marks>max)
            {
                max=st[i].marks;
                pos=i;
            }
        }
        return st[pos];
    }
    void main()
    {
        Student1 t=new Student1();
        t.input();
        t.show();
        t.create();
    }
}