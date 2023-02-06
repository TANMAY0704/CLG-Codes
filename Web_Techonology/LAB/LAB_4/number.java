import java.util.Scanner;
public class number{
    static void palindrome(int num)
    {
        int r, sum = 0, temp;
        temp = num;
        while(num > 0)
        {
            r = num % 10;
            sum = (sum * 10) + r;
            num = num / 10;
        }
        if (temp == sum)
            System.out.println(temp + " is a palindrome number.");
        else
            System.out.println(temp + " is not a palindrome number.");
    }
    static void armstrong(int num)
    {
        int r, sum = 0, temp;
        temp = num;
        while(num > 0)
        {
            r = num % 10;
            sum = sum + (r * r * r);
            num = num / 10;
        }
        if (temp == sum)
            System.out.println(temp + " is an armstrong number.");
        else
            System.out.println(temp + " is not an armstrong number.");
    }
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        num = sc.nextInt();
        palindrome(num);
        armstrong(num);
    }
}
