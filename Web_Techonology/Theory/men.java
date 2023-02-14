import java.util.Scanner;
public class men {
    // area and perimeter of rectangle
    static void area(int l, int b) {
        int area = l * b;
        int peri = 2 * (l + b);
        System.out.println("Area is " + area);
        System.out.println("Perimeter is " + peri);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length");
        int l = sc.nextInt();
        System.out.println("Enter breadth");
        int b = sc.nextInt();
        area(l, b);
    }
}
