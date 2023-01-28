import java.io.*;

public class Employee
{
    private int id, age;
    private double salary;
    private String name;

    public void setData() throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter ID: ");
        id = Integer.parseInt(br.readLine());
        System.out.print("Enter name: ");
        name = br.readLine();
        System.out.print("Enter age: ");
        age = Integer.parseInt(br.readLine());
        System.out.print("Enter salary: ");
        salary = Double.parseDouble(br.readLine());
    }
    public void getData()
    {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee name: " + name);
        System.out.println("Employee age: " + age);
        System.out.println("Employee salary: " + salary);
    }
    public static void main(String args[]) throws IOException
    {
        Employee[] employee = new Employee[3];
        for (int i = 0;  i < 3; i++)
        {
            employee[i] = new Employee();
        }
        for (int i = 0; i < 3; i++)
        {
            System.out.println();
            employee[i].setData();
            System.out.println();
            employee[i].getData();
        }
    }
}
