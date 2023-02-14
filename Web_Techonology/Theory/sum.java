public class sum {
    // sum digit of integer
    static void sum(int n) {
        int sum = 0;
        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        System.out.println("Sum of digits is " + sum);
    }
    public static void main(String[] args) {
        sum(123);
    }
}
