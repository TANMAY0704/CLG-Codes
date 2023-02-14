public class prime {

    static boolean prime_no(int n, int i) {
        if (n <= 2) {
            return (n == 2) ? true : false;
        }
        if (n % i == 0) {
            return false;
        }
        if (i * i > n) {
            return true;
        }
        return prime_no(n, i + 1);

    }

    public static void main(String[] args) {
        int n = 11;
        if (prime_no(n, 2)) {
            System.out.println("Prime");
        } else {
            System.out.println("Not Prime");
        }
    }
}
