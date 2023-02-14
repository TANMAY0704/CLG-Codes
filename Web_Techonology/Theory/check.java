import java.util.Scanner;
// check even odd

public class check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter nnumber");
        int x = sc.nextInt();
        if (x % 2 == 0) {
            System.out.println("Even");
        } 
        else {
            System.out.println("Odd");

        }
    }
}