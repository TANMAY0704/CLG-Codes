interface Employee {
    double earnings(double basicSalary);
    double deductions(double basicSalary);
    double bonus();
}

class Manager implements Employee {
    public double earnings(double basicSalary) {
        double da = 0.8 * basicSalary;
        double hra = 0.15 * basicSalary;
        return basicSalary + da + hra;
    }

    public double deductions(double basicSalary) {
        return 0.12 * basicSalary;
    }

    public double bonus() {
        throw new UnsupportedOperationException("Manager class does not support bonus.");
    }
}

class Substaff extends Manager {
    double salary;

    Substaff(double salary) {
        this.salary = salary;
    }

    public double bonus() {
        double bonusAmount = 0.5 * salary;
        return bonusAmount;
    }
}

public class q1 {
    public static void main(String[] args) {
        double basicSalary = 10000.0;

        Employee substaff = new Substaff(basicSalary);

        double earnings = substaff.earnings(basicSalary);
        double deductions = substaff.deductions(basicSalary);
        double bonus = substaff.bonus();

        System.out.println("Earnings: " + earnings);
        System.out.println("Deductions: " + deductions);
        System.out.println("Bonus: " + bonus);
    }
}
