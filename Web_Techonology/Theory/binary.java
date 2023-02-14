import java.util.Scanner;
public class binary {
    static void binary(int x) {
        int bin = 0;
        int rem, i = 1;
        while (x != 0) {
            rem = x % 2;
            x = x / 2;
            bin = bin + rem * i;
            i = i * 10;
        }
        System.out.println("Binary is " + bin);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        int x = sc.nextInt();
        binary(x);
    }
}
