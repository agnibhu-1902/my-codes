abstract class ElectricityBill {
    // Fields to store the customer name, unit consumed, and rate per unit
    protected String customerName;
    protected double unitConsumed;
    protected double ratePerUnit;

    public ElectricityBill(String customerName, double unitConsumed, double ratePerUnit) {
        this.customerName = customerName;
        this.unitConsumed = unitConsumed;
        this.ratePerUnit = ratePerUnit;
    }

    // Abstract method to calculate the bill amount
    public abstract double getBillAmount();
}

class DomesticElectricityBill extends ElectricityBill {
    // Additional charge for using a domestic connection
    private static final double ADDITIONAL_CHARGE = 50.0;

    public DomesticElectricityBill(String customerName, double unitConsumed, double ratePerUnit) {
        super(customerName, unitConsumed, ratePerUnit);
    }

    @Override
    public double getBillAmount() {
        // Calculate the bill amount for a domestic connection
        return unitConsumed * ratePerUnit + ADDITIONAL_CHARGE;
    }
}

class CommercialElectricityBill extends ElectricityBill {
    // Additional charge for using a commercial connection
    private static final double ADDITIONAL_CHARGE = 100.0;

    public CommercialElectricityBill(String customerName, double unitConsumed, double ratePerUnit) {
        super(customerName, unitConsumed, ratePerUnit);
    }

    @Override
    public double getBillAmount() {
        // Calculate the bill amount for a commercial connection
        return unitConsumed * ratePerUnit + ADDITIONAL_CHARGE;
    }
}

public class Bill {
    public static void main(String[] args) {
        // Create a domestic electricity bill for a customer
        ElectricityBill domesticBill = new DomesticElectricityBill("John Smith", 100, 5.0);
        double billAmount = domesticBill.getBillAmount();
        System.out.println("The bill amount for a domestic connection is " + billAmount + ".");

        // Create a commercial electricity bill for a customer
        ElectricityBill commercialBill = new CommercialElectricityBill("Jane Doe", 200, 6.0);
        billAmount = commercialBill.getBillAmount();
        System.out.println("The bill amount for a commercial connection is " + billAmount + ".");
    }
}
