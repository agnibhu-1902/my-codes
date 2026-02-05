package EmployeeManagement;

import java.util.Collection;
import java.util.Optional;

public class EmployeeRepository {
    private final InMemoryEmployeeStore store = InMemoryEmployeeStore.getInstance();

    public void save(Employee employee) {
        store.getEmployeeMap().put(employee.getEmployeeId(), employee);
    }

    public Optional<Employee> findById(String employeeId) {
        return Optional.ofNullable(store.getEmployeeMap().get(employeeId));
    }

    public Collection<Employee> findAll() {
        return store.getEmployeeMap().values();
    }

    public void delete(String employeeId) {
        store.getEmployeeMap().remove(employeeId);
    }
}