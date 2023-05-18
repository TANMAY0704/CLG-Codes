import java.util.*;
import java.io.*;

public class pass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the password : ");
        String pass = sc.nextLine();


        int count = 0;
        for (int i = 0; i < pass.length(); i++) {
            if (Character.isDigit(pass.charAt(i))) {
                count++;
            }
        }
        boolean x = true;
        for (int i = 0; i < pass.length(); i++) {
            if (Character.isLowerCase(pass.charAt(i))) {
                x = false;
                break;
            }
        }
        if (pass.length() < 6) {
            System.out.println("Password must be more than 6 characters");
        } else if (count < 3) {
            System.out.println("Password must contain at least 3 numbers");
        } else if (!x) {
            System.out.println("Password must contain upper case character");
        } else {
            System.out.println("Password is valid");
        }
    }    
}
