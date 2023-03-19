import java.util.Scanner;
class Date {
    int date , month ,year ;
    Date(int date , int month , int year) {
        this.date = date;
        this.month = month;
        this.year = year;
    }
    void daysSinceJan1(){
        int days = 0;
        for (int i = 1; i < month; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                days += 31;
            } 
            else if (i == 4 || i == 6 || i == 9 || i == 11) {
                days += 30;
            } 
            else {
                if (year % 4 == 0) {
                    days += 29;
                } 
                else {
                    days += 28;
                }
            }
        }
        days += date;
        System.out.println("Days since Jan 1: " + days);

    }
}

public class q2 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter date: ");
        int date = sc.nextInt();
        System.out.print("Enter month: ");
        int month = sc.nextInt();
        System.out.print("Enter year: ");
        int year = sc.nextInt();
        Date d = new Date(date, month, year);
        d.daysSinceJan1();

    }
}
