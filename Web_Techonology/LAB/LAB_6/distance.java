class dist {
    int feet;
    int inch;

    dist(int f, int i) {
        feet = f;
        inch = i;
    }

    void display() {
        System.out.println("Feet: " + feet + " Inch: " + inch);
    }

    dist add(dist d1, dist d2) {
        dist d3 = new dist(0, 0);
        d3.feet = d1.feet + d2.feet;
        d3.inch = d1.inch + d2.inch;
        if (d3.inch >= 12) {
            d3.feet++;
            d3.inch -= 12;
        }
        return d3;
    }

    dist subtract(dist d1, dist d2) {
        dist d3 = new dist(0, 0);
        if (d2.feet > d1.feet) {
            d3.feet = d2.feet - d1.feet;
            d3.inch = d2.inch - d1.inch;
        } 
        else {
            d3.feet = d1.feet - d2.feet;
            d3.inch = d1.inch - d2.inch;
        }
        if (d3.inch < 0) {
            d3.feet--;
            d3.inch += 12;
        }
        return d3;
    }
}

public class distance {

    public static void main(String[] args) {
        dist d1 = new dist(5, 10);
        dist d2 = new dist(6, 11);
        dist d3 = new dist(0, 0);
        d3 = d3.add(d1, d2);
        d3.display();
        d3 = d3.subtract(d1, d2);
        d3.display();
    }
}
