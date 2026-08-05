// ==================== towkir.java ====================
// Superclass (Parent)
public class Mobile {
    protected String brand;
    protected String model;
    protected double price;

    // Constructor
    public Mobile(String brand, String model, double price) {
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    // Common methods for all mobiles
    public void makeCall(String number) {
        System.out.println(brand + " " + model + " is calling " + number);
    }

    public void sendMessage(String number, String msg) {
        System.out.println("Sending message from " + brand + ": " + msg);
    }

    // Method that will be overridden
    public void showFeatures() {
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Price: $" + price);
    }

    // Getter methods
    public String getBrand() { return brand; }
    public String getModel() { return model; }
    public double getPrice() { return price; }
}

// ==================== Samsung.java ====================
// Subclass 1
public class Samsung extends Mobile {
    private boolean hasSPen;
    private String screenType;  // AMOLED, etc.

    public Samsung(String model, double price, boolean hasSPen, String screenType) {
        super("Samsung", model, price);  // 👈 super() for parent constructor
        this.hasSPen = hasSPen;
        this.screenType = screenType;
    }

    // ✅ Method Overriding
    @Override
    public void showFeatures() {
        super.showFeatures();  // 👈 super to call parent method
        System.out.println("Screen: " + screenType);
        System.out.println("S-Pen: " + (hasSPen ? "Yes" : "No"));
        System.out.println("Samsung-specific: Knox Security, One UI");
    }

    // Samsung-specific method
    public void useSPen() {
        if (hasSPen) {
            System.out.println("Using S-Pen to take notes...");
        } else {
            System.out.println("This model doesn't have S-Pen");
        }
    }
}

// ==================== Nokia.java ====================
// Subclass 2
public class Nokia extends Mobile {
    private boolean isRugged;
    private int batteryMah;

    public Nokia(String model, double price, boolean isRugged, int batteryMah) {
        super("Nokia", model, price);  // 👈 super() for parent constructor
        this.isRugged = isRugged;
        this.batteryMah = batteryMah;
    }

    // ✅ Method Overriding
    @Override
    public void showFeatures() {
        super.showFeatures();  // 👈 super to call parent method
        System.out.println("Battery: " + batteryMah + " mAh");
        System.out.println("Rugged: " + (isRugged ? "Yes" : "No"));
        System.out.println("Nokia-specific: Pure Android, Durability");
    }

    // Nokia-specific method
    public void showDurability() {
        System.out.println("Nokia " + model + " - Built like a tank! 💪");
    }
}

// ==================== Main.java ====================
// Test class with Polymorphism
public class towkir {
    public static void main(String[] args) {
        // ✅ Polymorphism - Parent reference, Child objects
        Mobile samsung = new Samsung("Galaxy S24 Ultra", 1299.99, true, "AMOLED");
        Mobile nokia = new Nokia("XR21", 499.99, true, 4800);

        System.out.println("========== SAMSUNG ==========");
        samsung.showFeatures();
        System.out.println();

        System.out.println("========== NOKIA ==========");
        nokia.showFeatures();

        // Common methods from parent
        System.out.println();
        samsung.makeCall("01712345678");
        nokia.sendMessage("01787654321", "Hello from Nokia!");
    }
}