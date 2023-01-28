class Person
{
    private String name, address;
    public Person(String name, String address)
    {
        this.name = name;
        this.address = address;
    }
    public void setPerson(String name, String address)
    {
        this.name = name;
        this.address = address;
    }
    public String toString()
    {
        return "Person[name = " + name + ", address = " + address;
    }
}

class Student extends Person
{
    String program, year; double fees;
    public Student(String name, String address, String program, String year, double fees)
    {
        super(name, address);
        this.program = program;
        this.year = year;
        this.fees = fees;
    }
    public void setStudent(String name, String address, String program, String year, double fees)
    {
        super.setPerson(name, address);
        this.program = program;
        this.year = year;
        this.fees = fees;
    }
    public String toString()
    {
        return super.toString() + ", program = " + program + ", year = " + year + ", fees = " + fees + "]";
    }
}

class Staff extends Person
{
    String school; double pay;
    public Staff(String name, String address, String school, double pay)
    {
        super(name, address);
        this.school = school;
        this.pay = pay;
    }
    public void setStaff(String name, String address, String school, double pay)
    {
        super.setPerson(name, address);
        this.school = school;
        this.pay = pay;
    }
    public String toString()
    {
        return super.toString() + ", school = " + school + ", pay = " + pay + "]";
    }
}

public class School
{
    public static void main(String args[])
    {
        Person person = new Person("John", "245 Greenwich");
        person.setPerson("John Doe", "298 Berlin");
        System.out.println(person + "]");
        Student student = new Student("Mary", "145 Tokyo", "Bachelors", "2019", 24589.50);
        student.setStudent("Mary Jane", "167 Kyoto", "Masters", "2020", 38557.50);
        System.out.println(student);
        Staff staff = new Staff("Jack", "184 New York", "Mayfair Day", 58907);
        staff.setStaff("Jack Dawson", "187 California", "Mayfair Day", 67892.50);
        System.out.println(staff);
    }
}