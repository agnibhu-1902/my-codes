class Student
{
    String name; int age;
    public Student(String name, int age)
    {
        this.name = name;
        this.age = age;
    }
    public static boolean isEqual(Student obj1, Student obj2)
    {
        if (obj1.name == obj2.name && obj1.age == obj2.age)
            return true;
        else
            return false;
    }
}

public class ObjectEquality
{
    public static void main(String args[])
    {
        Student s1 = new Student("John Doe", 21);
        Student s2 = new Student("Mary Jane", 21);
        if (Student.isEqual(s1, s2))
            System.out.println("The students are same");
        else
            System.out.println("The students are not same");
        if (Student.isEqual(s1, s1))
            System.out.println("The students are same");
        else
            System.out.println("The students are not same");
    }
}
