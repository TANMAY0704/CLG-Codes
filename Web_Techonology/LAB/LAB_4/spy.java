import java.util.Scanner;
public class spy {
    public static void main(String[] args){
        int num, sum = 0, product = 1, r;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        while(num > 0)
        {
            r = num % 10;
            sum = sum + r;
            product = product * r;
            num = num / 10;
        }
        if (sum == product)
            System.out.println("The number is a spy number.");
        else
            System.out.println("The number is not a spy number.");
    }
}
