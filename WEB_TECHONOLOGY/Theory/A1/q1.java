interface currency {
    void moneycoversion();
    void countrycurrency();
}

class currencyConversion implements currency {
    public void moneycoversion() {
        System.out.println("Money Conversion");
    }

    public void countrycurrency() {
        System.out.println("Country Currency");
    }
}

public class q1 {
    public static void main(String[] args) {
        currencyConversion cc = new currencyConversion();
        cc.moneycoversion();
        cc.countrycurrency();
    }
}