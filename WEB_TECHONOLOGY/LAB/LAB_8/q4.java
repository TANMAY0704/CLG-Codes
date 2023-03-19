import java.util.Scanner;
class SavingAcc{
    static int intrest ;
    private int balance;
    SavingAcc(int balance){
        this.balance = balance;
    }
    void monthlyintrest(int intrest){
        balance += (balance*intrest)/1200;
    }
    void show(){
        System.out.println("Balance: "+balance);
    }
}
public class q4 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        SavingAcc s = new SavingAcc(2000);
        System.out.print("Enter intrest: ");
        int intrest = sc.nextInt();
        s.monthlyintrest(intrest);
        s.show();
        SavingAcc s1 = new SavingAcc(3000);
        System.out.print("Enter intrest: ");
        int intres = sc.nextInt();
        s1.monthlyintrest(intres);
        s1.show();
        
    }
}
