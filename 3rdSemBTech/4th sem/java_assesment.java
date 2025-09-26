import java.util.*;
class Employee {
    protected String name;
    protected String address;
    protected double salary;
    protected String jobTitle;

    public Employee(String name, String address, double salary, String jobTitle) {
        this.name = name;
        this.address = address;
        this.salary = salary;
        this.jobTitle = jobTitle;
    }
}

class Manager extends Employee {
    public Manager(String name, String address, double salary) {
        super(name, address, salary, "Manager");
    }

    public double calculateBonus() {
        return salary * 0.2;
    }

    public String generateReport() {
        return name + " is leading multiple teams and ensuring project success.";
    }

    public String currentProject() {
        return "Overseeing company-wide strategic projects.";
    }
}

class Developer extends Employee {
    public Developer(String name, String address, double salary) {
        super(name, address, salary, "Developer");
    }

    public double calculateBonus() {
        return salary * 0.1;
    }

    public String generateReport() {
        return name + " is actively coding and optimizing software applications.";
    }

    public String currentProject() {
        return "Developing and debugging backend systems.";
    }
}

class Programmer extends Employee {
    public Programmer(String name, String address, double salary) {
        super(name, address, salary, "Programmer");
    }

    public double calculateBonus() {
        return salary * 0.1;
    }

    public String generateReport() {
        return name + " is writing and testing code for various applications.";
    }

    public String currentProject() {
        return "Working on software modules and troubleshooting issues.";
    }
}

public class java_assesment {
    public static void main(String[] args) {
        Manager manager = new Manager("Raj", "Delhi", 90000);
        Developer dev = new Developer("Amit", "Mumbai", 70000);
        Programmer programmer = new Programmer("Sita", "Bangalore", 60000);
        
        System.out.println(manager.generateReport());
        System.out.println("Bonus: " + manager.calculateBonus());
        System.out.println(manager.currentProject());

        System.out.println(dev.generateReport());
        System.out.println("Bonus: " + dev.calculateBonus());
        System.out.println(dev.currentProject());

        System.out.println(programmer.generateReport());
        System.out.println("Bonus: " + programmer.calculateBonus());
        System.out.println(programmer.currentProject());
    }
}