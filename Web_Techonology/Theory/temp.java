import java.util.Scanner;
public class temp {
    // convert temperature to degrees
    static void temperature(int x) {
        int c = (x - 32) * 5 / 9;
        System.out.println("Temperature in degrees is " + c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter temperature in fahrenheit");
        int x = sc.nextInt();
        temperature(x);
    }
}
