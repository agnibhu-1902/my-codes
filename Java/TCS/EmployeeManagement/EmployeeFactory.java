package EmployeeManagement;

public class EmployeeFactory {
    public static Employee createEmployee(String id, String name, Department department, Address address, int age, String sex) {
        if (age <= 17)
            throw new IllegalArgumentException("Age must be greater than seventeen");

        if (department == null)
            throw new IllegalArgumentException("Department cannot be null");

        if (address == null)
            throw new IllegalArgumentException("Address cannot be null");

        return new Employee(id, name, department, address, age, sex);
    }
}
