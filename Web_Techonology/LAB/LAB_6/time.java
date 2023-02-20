class cal{
    // subtract two times in 24hr format
    cal(int h1, int m1, int s1, int h2, int m2, int s2){
        int h = 0, m = 0, s = 0;

        if (s1 > s2) {
            m2--;
            s2 += 60;
        }
        s = s2 - s1;
        if (m1 > m2) {
            h2--;
            m2 += 60;
        }
        m = m2 - m1;
        h = h2 - h1;

        System.out.println("Time Difference: " + h + " hours " + m + " minutes " + s + " seconds");
    }
    // add two times in 24hr format
    cal(int h1, int m1, double s1, int h2, int m2, double s2){
        int h = 0, m = 0;
        double s = 0;

        s = s1 + s2;
        if (s >= 60) {
            m++;
            s -= 60;
        }
        m = m1 + m2;
        if (m >= 60) {
            h++;
            m -= 60;
        }
        h = h1 + h2;
        if (h >= 24) {
            h -= 24;
        }
        System.out.println("Time Sum: " + h + " hours " + m + " minutes " + s + " seconds");
    }
    


}
public class time {
    
    public static void main(String[] args) {
        cal c1 = new cal(5, 10, 15, 5, 14, 14);
        cal c2 = new cal(5, 10, 15.5, 5, 14, 14.5);
    }
}
