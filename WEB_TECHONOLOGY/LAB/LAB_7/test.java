package Factorial;
import java.util.Scanner;
public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int n = sc.nextInt();
        Fact f = new Fact();
        f.findFactorial(n);
    }
}
