import java.util.Scanner;

class temperature {
    float f, c;

    temperature(int f, int c) {
        this.f = f;
        this.c = c;
    }

    void convert() {
        // chhoice
        System.out.println("1. Fahrenheit to Celsius");
        System.out.println("2. Celsius to Fahrenheit");
        System.out.println("Enter your choice: ");
        Scanner sc = new Scanner(System.in);
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                try {
                    System.out.println("Enter Fahrenheit: ");
                    f = sc.nextFloat();
                    c = (f - 32) * 5 / 9;
                    System.out.println("Celsius: " + c);
                } catch (NumberFormatException e) {
                    System.out.println("Invalid Input");
                }
                break;
            case 2:
                try {
                    System.out.println("Enter Celsius: ");
                    c = sc.nextFloat();
                    f = (c * 9 / 5) + 32;
                    System.out.println("Fahrenheit: " + f);
                } catch (NumberFormatException e) {
                    System.out.println("Invalid Input");
                }
                break;
            default:
                System.out.println("Invalid Choice");

        }
    }
}

public class a1 {
    public static void main(String[] args) {
        temperature t = new temperature(0, 0);
        t.convert();
    }
}
