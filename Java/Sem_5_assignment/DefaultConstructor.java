class SuperClass {
    public SuperClass() {
        // This is the default constructor of the superclass
        System.out.println("This is the default constructor of the superclass.");
    }
}

class SubClass extends SuperClass {
    public SubClass() {
        // This is the default constructor of the subclass
        // It calls the default constructor of the superclass by default
        super();
        System.out.println("This is the default constructor of the subclass.");
    }
}

public class DefaultConstructor {
    public static void main(String[] args) {
        // Create an instance of the SubClass
        new SubClass();
    }
}
