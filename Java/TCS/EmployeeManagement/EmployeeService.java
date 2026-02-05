package EmployeeManagement;

import java.util.List;
import java.util.stream.Collectors;

public class EmployeeService {
    private final EmployeeRepository repository = new EmployeeRepository();

    public void createEmployee(Employee employee) {
        repository.save(employee);
    }

    public void updateEmployee(String employeeId, Employee updatedData) {
        Employee existing = repository.findById(employeeId).orElseThrow(() -> new EmployeeNotFoundException("Employee not found"));

        existing.setName(updatedData.getName());
        existing.setDepartment(updatedData.getDepartment());
        existing.setAddress(updatedData.getAddress());
        existing.setAge(updatedData.getAge());
        existing.setSex(updatedData.getSex());
    }

    public List<Employee> getAllEmployees() {
        return repository.findAll().stream().collect(Collectors.toList());
    }

    public void deleteEmployee(String employeeId) {
        if (repository.findById(employeeId).isEmpty())
            throw new EmployeeNotFoundException("Cannot delete. Employee not found!");
        repository.delete(employeeId);
    }

    public void showEmployeeDepartmentMapping() {
        repository.findAll().forEach(emp -> System.out.println(emp.getName() + "->" + emp.getDepartment().getDeptName()));
    }
}
