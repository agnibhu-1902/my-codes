abstract class Employee
{
    protected String name;
    protected double salary;
    public abstract double netSalary();
    public abstract void display();
}

class Manager extends Employee
{
    public Manager(String name, double salary)
    {
        this.name = name;
        this.salary = salary;
    }
    public double netSalary()
    {
        return 2.46 * salary;
    }
    public void display()
    {
        System.out.println("Name: " + name + "\nSalary: " + salary);
    }
}

class Clerk extends Employee
{
    public Clerk(String name, double salary)
    {
        this.name = name;
        this.salary = salary;
    }
    public double netSalary()
    {
        return 1.24 * salary;
    }
    public void display()
    {
        System.out.println("Name: " + name + "\nSalary: " + salary);
    }
}

public class Office
{
    public static void main(String args[])
    {
        Employee manager = new Manager("John Doe", 15000.43);
        Employee clerk = new Clerk("Mary Jane", 10000.21);
        manager.display();
        System.out.println("Manager net salary: " + manager.netSalary());
        clerk.display();
        System.out.println("Clerk net salary: " + clerk.netSalary());
    }
}