package EmployeeManagement;

public class Application {
    public static void main(String[] args) {
        EmployeeService service = new EmployeeService();

        Department it = new Department("D1", "IT");
        Department hr = new Department("D2", "HR");

        Address a1 = new Address("Kolkata", "WB", "Street 1", "700001");
        Address a2 = new Address("Delhi", "DL", "Street 2", "110001");

        Employee e1 = EmployeeFactory.createEmployee("E1", "Agnibhu", it, a1, 25, "Male");
        Employee e2 = EmployeeFactory.createEmployee("E2", "Reshmi", hr, a2, 30, "Female");

        service.createEmployee(e1);
        service.createEmployee(e2);

        service.showEmployeeDepartmentMapping();

        service.deleteEmployee("E2");

        System.out.println("Employees after deletion:");
        service.getAllEmployees().forEach(e -> System.out.println(e.getName()));
    }
}
