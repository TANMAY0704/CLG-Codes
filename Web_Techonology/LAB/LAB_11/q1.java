import java.util.Scanner;

public class q1 extends Exception {

    public q1(String message) {
        super(message);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        scanner.close();
        try {
            if (num < 0) {
                throw new q1("Given number is less than zero.");
            } 
            else {
                System.out.println("Given number is: " + num);
            }
        } 
        catch (q1 e) {
            System.out.println(e.getMessage());
        }
    }
}
