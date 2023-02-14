public class root {
    
    static void roots(int a, int b, int c) {
        int d = b * b - 4 * a * c;
        double sqrt_val = Math.sqrt(Math.abs(d));
        if (d > 0) {
            System.out.println("Roots are real and different \n");
            System.out.println((-b + sqrt_val) / (2 * a) + "\n" + (-b - sqrt_val) / (2 * a));
        } else if (d == 0) {
            System.out.println("Roots are real and same \n");
            System.out.println(-b / (2 * a));
        } else {
            System.out.println("Roots are complex \n");
            System.out.println(-b / (2 * a) + " + i" + sqrt_val + "\n" + -b / (2 * a) + " - i" + sqrt_val);
        }
    }

    public static void main(String[] args) {
        int a = 1, b = 4, c = 4;
        roots(a, b, c);
    }
}
