import java.util.Scanner;

public class QN6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first name : ");
        String FName = input.next();
        System.out.print("Enter last name : ");
        String LName = input.next();
        System.out.println("Full Name : " + FName + " " + LName);
        input.close();
    }
}