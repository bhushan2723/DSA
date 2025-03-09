class Employee {
    private int id;
    private String name;
    private String department;
    private double salary;

    // Default constructor
    public Employee() {
        this.id = 0;
        this.name = "Unknown";
        this.department = "Unknown";
        this.salary = 0.0;
    }

    // Parameterized constructor
    public Employee(int id, String name, String department, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    // Display method
    public void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("Salary: " + salary);
    }

    public double getSalary() {
        return salary;
    }
}

class Manager extends Employee {
    private double bonus;

    // Constructor
    public Manager(int id, String name, String department, double salary, double bonus) {
        super(id, name, department, salary);
        this.bonus = bonus;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Bonus: " + bonus);
        System.out.println("Total Salary: " + (getSalary() + bonus));
    }

    public double getTotalSalary() {
        return getSalary() + bonus;
    }
}

// Main Class
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of managers: ");
        int n = sc.nextInt();

        Manager[] managers = new Manager[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter ID: ");
            int id = sc.nextInt();
            sc.nextLine(); // Consume newline

            System.out.print("Enter Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Department: ");
            String department = sc.nextLine();

            System.out.print("Enter Salary: ");
            double salary = sc.nextDouble();

            System.out.print("Enter Bonus: ");
            double bonus = sc.nextDouble();

            managers[i] = new Manager(id, name, department, salary, bonus);
        }

        Manager highestPaid = managers[0];
        for (Manager manager : managers) {
            if (manager.getTotalSalary() > highestPaid.getTotalSalary()) {
                highestPaid = manager;
            }
        }

        System.out.println("\nManager with the highest total salary:");
        highestPaid.display();
    }
}
