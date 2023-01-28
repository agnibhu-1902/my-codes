class Student
{
    private int rollno;
    private String name;
    public void setDetails(int rollno, String name)
    {
        this.rollno = rollno;
        this.name = name;
    }
    public void getDetails()
    {
        System.out.println("Roll no.: " + rollno + "\nName: " + name);
    }
}

class Marks extends Student
{
    protected int m1, m2, m3;
    public void setDetails(int m1, int m2, int m3)
    {
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }
    public void getMarks()
    {
        System.out.println("Marks for subject 1: " + m1 + "\nMarks for subject 2: " + m2 + "\nMarks for subject 3: " + m3);
    }
}

class Result extends Marks
{
    private int total;
    public void getResult()
    {
        total = m1 + m2 + m3;
        System.out.println("Total marks: " + total);
    }
}

public class Exam
{
    public static void main(String args[])
    {
        Result r = new Result();
        r.setDetails(1, "John");
        r.setDetails(65, 78, 92);
        r.getDetails();
        r.getMarks();
        r.getResult();
    }
}

