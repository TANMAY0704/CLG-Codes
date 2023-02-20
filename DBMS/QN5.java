import java.util.Scanner;

public class QN5 {
    static int reverse(int a) {
        int rem, rev = 0;
        while (a != 0) {
            rem = a % 10;
            rev = rev * 10 + rem;
            a /= 10;
        }
        return rev;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = input.nextInt();
        int rev = reverse(n);
        if (n == rev) {
            System.out.println(n + " is Palindrome");
        } else {
            System.out.println(n + " is not Palindrome");
        }
        input.close();
    }
}