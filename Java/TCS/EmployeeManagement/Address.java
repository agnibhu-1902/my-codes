package EmployeeManagement;

public class Address {
    private String city;
    private String state;
    private String addressLine;
    private String pin;

    public Address(String city, String state, String addressLine, String pin) {
        this.city = city;
        this.state = state;
        this.addressLine = addressLine;
        this.pin = pin;
    }

    public String getCity() { return city; }
    public String getState() { return state; }
    public String getAddressLine() { return addressLine; }
    public String getPin() { return pin; }

    public void setCity(String city) { this.city = city; }
    public void setState(String state) { this.state = state; }
    public void setAddressLine(String addressLine) { this.addressLine = addressLine; }
    public void setPin(String pin) { this.pin = pin; }
}
