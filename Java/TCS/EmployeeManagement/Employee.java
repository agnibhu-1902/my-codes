package EmployeeManagement;

public class Employee {
    private final String employeeId;
    private String name;
    private Department department;
    private Address address;
    private int age;
    private String sex;

    public Employee(String employeeId, String name, Department department, Address address, int age, String sex) {
        this.employeeId = employeeId;
        this.name = name;
        this.department = department;
        this.address = address;
        this.age = age;
        this.sex = sex;
    }

    public String getEmployeeId() {
        return employeeId;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Department getDepartment() {
        return department;
    }

    public void setDepartment(Department department) {
        this.department = department;
    }

    public Address getAddress() {
        return address;
    }

    public void setAddress(Address address) {
        this.address = address;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }
}
