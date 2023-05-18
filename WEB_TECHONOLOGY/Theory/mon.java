class Money {
    int a, b;

    Money(int a, int b) {
        if (a > 0 && b > 0 && a < 100 && b < 100) {
            this.a = a;
            this.b = b;
        }
    }

    void addition(Money obj1, Money obj2) {
        int x = obj1.a + obj2.a;
        int y = obj1.b + obj2.b;
        if (y >= 100) {
            x += y / 100;
            y = y - 100;
        }
        System.out.println("Sum of money is " + x + "." + y);
    }
    void subtraction(Money obj1, Money obj2) {
        int x = obj1.a - obj2.a;
        int y = obj1.b - obj2.b;
        if (y < 0) {
            x -= 1;
            y = 100 + y;
        }
        System.out.println("Difference of money is " + x + "." + y);
    }
}

public class mon{
    public static void main(String[] args) {
        Money obj1 = new Money(10, 90);
        Money obj2 = new Money(20, 30);
        obj1.addition(obj1, obj2);
        obj1.subtraction(obj1, obj2);
    }
}
