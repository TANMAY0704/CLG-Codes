package Let_me_calculate;

import Calculator.*;
import java.util.Scanner;

public class calcc {
    calculator c = new calculator();
    Scanner sc = new Scanner(System.in);

    public void calculate() {
        System.out.print("Enter the opreation of choice : ");
        int x = sc.nextInt();
        System.out.println("1.Add");
        System.out.println("2.Sub");
        System.out.println("3.Mul");
        System.out.println("4.Div");
        System.out.println("5.Mod");
        System.out.print("Enter the first number : ");
        int a = sc.nextInt();
        System.out.print("Enter the second number : ");
        int b = sc.nextInt();

        switch (x) {
            case 1:
                System.out.println("The sum is : " + c.add(a, b));
                break;
            case 2:
                System.out.println("The difference is : " + c.sub(a, b));
                break;
            case 3:
                System.out.println("The product is : " + c.mul(a, b));
                break;
            case 4:
                System.out.println("The quotient is : " + c.div(a, b));
                break;
            case 5:
                System.out.println("The remainder is : " + c.mod(a, b));
                break;
            default:
                System.out.println("Invalid choice");
        }
    }

    public static void main(String[] args) {

    }
}
