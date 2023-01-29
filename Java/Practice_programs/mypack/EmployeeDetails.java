package mypack;

class Employee
{
    private String name;
    private double pay, hra, da, gross;
    public Employee()
    {
        name = "John Doe";
        pay = 60000;
    }
    public Employee(Employee emp)
    {
        this.name = emp.name;
        this.pay = emp.pay;
    }
    public Employee calculate()
    {
        hra = 12 / 100.0 * pay;
        da = 3 / 100.0 * pay;
        gross = pay + hra + da;
        return this;
    }
    public String toString()
    {
        return "Name: " + name + "\tPay: " + pay + "\tHRA: " + hra + "\tDA: " + da + "\tGross: " + gross;
    }
    public void display()
    {
        if (gross > 50000)
            System.out.println(this);
    }
}

public class EmployeeDetails
{
    public static void main(String args[])
    {
        Employee emp = new Employee();
        Employee e = new Employee(emp);
        e.calculate().display();
    }
}
