package EmployeeManagement;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class InMemoryEmployeeStore {
    private static final InMemoryEmployeeStore INSTANCE = new InMemoryEmployeeStore();
    private final Map<String, Employee> employeeMap = new ConcurrentHashMap<>();

    private InMemoryEmployeeStore() {}

    public static InMemoryEmployeeStore getInstance() {
        return INSTANCE;
    }

    public Map<String, Employee> getEmployeeMap() {
        return employeeMap;
    }
}
