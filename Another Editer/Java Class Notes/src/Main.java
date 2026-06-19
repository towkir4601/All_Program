class Employee {
    int id;
    String name;
    int basic_salary;

    // Constructor
    Employee(int id, String name, int basic_salary) {
        this.id = id;
        this.name = name;
        this.basic_salary = basic_salary;
    }

    int calculate_salary() {
        return basic_salary;
    }

    void display() {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Basic Salary: " + basic_salary);
    }
}

// Lecturer Class
class Lecturer extends Employee {
    double research_allowance;

    Lecturer(int id, String name, int basic_salary, double research_allowance) {
        super(id, name, basic_salary);
        this.research_allowance = research_allowance;
    }

    void display() {
        super.display();
        System.out.println("Research Allowance: " + research_allowance);
        System.out.println("Total Salary: " +
                (calculate_salary() + research_allowance));
    }
}

// Professor Class
class Professor extends Employee {
    double research_allowance;
    double research_bonus;

    Professor(int id, String name, int basic_salary,
              double research_allowance, double research_bonus) {
        super(id, name, basic_salary);
        this.research_allowance = research_allowance;
        this.research_bonus = research_bonus;
    }

    void display() {
        super.display();
        System.out.println("Research Allowance: " + research_allowance);
        System.out.println("Research Bonus: " + research_bonus);
        System.out.println("Total Salary: " +
                (calculate_salary() + research_allowance + research_bonus));
    }
}

// Administrative Officer Class
class AdministrativeOfficer extends Employee {
    double administrative_allowance;

    AdministrativeOfficer(int id, String name, int basic_salary,
                          double administrative_allowance) {
        super(id, name, basic_salary);
        this.administrative_allowance = administrative_allowance;
    }

    void display() {
        super.display();
        System.out.println("Administrative Allowance: "
                + administrative_allowance);
        System.out.println("Total Salary: "
                + (calculate_salary() + administrative_allowance));
    }
}

// Main Class
public class main {
    public static void main(String[] args) {

        Lecturer l = new Lecturer(210, "Towkir", 5000, 9000);
        Professor p = new Professor(101, "Rahim", 10000, 5000, 3000);
        AdministrativeOfficer a =
                new AdministrativeOfficer(301, "Karim", 7000, 2000);

        System.out.println("===== Lecturer =====");
        l.display();

        System.out.println("\n===== Professor =====");
        p.display();

        System.out.println("\n===== Administrative Officer =====");
        a.display();
    }
}