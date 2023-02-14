import java.util.Scanner;
public class second {
    
    static void time(int x) {
        int min = x / 60;
        int sec = x % 60;
        int hr = min / 60;
        min = min % 60;
        System.out.println("Hours: " + hr);
        System.out.println("Minutes: " + min);
        System.out.println("Seconds: " + sec);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter seconds");
        int x = sc.nextInt();
        time(x);
    }
}
