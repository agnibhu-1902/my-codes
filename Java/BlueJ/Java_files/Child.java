class Child extends Base
{
    int total;char grade;
    void calculate()
    {
        total=m1+m2;
        int avg=total/2;
        if(avg>=80)
        grade='A';
        else if(avg>=60)
        grade='B';
        else if(avg>=40)
        grade='C';
        else
        grade='D';
    }
    void show()
    {
        display();
        System.out.println(total);
        System.out.println(grade);
    }
    public static void main(String args[])
    {
        Child c1=new Child();
        c1.input();
        c1.calculate();
        c1.show();
    }
}