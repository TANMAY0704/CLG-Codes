import java.util.Scanner;
public class account {
    int cust_id;
    String cust_name , branch;
    double balance;
    account(){
        balance = 1000;
    }
    void get(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the customer id: ");
        cust_id = sc.nextInt();
        System.out.println("Enter the customer name: ");
        cust_name = sc.next();
        System.out.println("Enter the branch: ");
        branch = sc.next();
    }
    void display(){
        System.out.println("Customer id: " + cust_id);
        System.out.println("Customer name: " + cust_name);
        System.out.println("Branch: " + branch);
        System.out.println("Balance: " + balance);
    }
    void withdraw(double amt){
        if(amt > balance){
            System.out.println("Insufficient balance");
        }
        else{
            balance -= amt;
            System.out.println("Amount withdrawn: " + amt);
            System.out.println("Balance: " + balance);
        }

    }
    void deposit(double amt){
        balance += amt;
        System.out.println("Amount deposited: " + amt);
        System.out.println("Balance: " + balance);
    }
    public static void main(String[] args) {
        account obj = new account();
        obj.get();
        obj.display();
        obj.withdraw(400);
        obj.deposit(1000);
    }
}
