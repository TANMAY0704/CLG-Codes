class account {
    int acc_no;
    int balance;
    account(int acc_no, int balance){
        this.acc_no = acc_no;
        this.balance = balance;
    }
    void display(){
        System.out.println("Account Number : " + acc_no);
        System.out.println("Balance : " + balance);
    }

}
class Person extends account{
    String name;
    String aadhar;
    Person(int acc_no, int balance, String name, String aadhar){
        super(acc_no, balance);
        this.name = name;
        this.aadhar = aadhar;
    }
    void display(){
        super.display();
        System.out.println("Name : " + name);
        System.out.println("Aadhar : " + aadhar);
    }

}
public class q5 {
 public static void main(String[] args) {
        Person p1 = new Person(123456789, 10000, "Rahul", "123456789012");
        p1.display();
        // 5 objects

        Person p2 = new Person(123456789, 10000, "Rahul", "123456789012");
        p2.display();

        Person p3 = new Person(123456789, 10000, "Rahul", "123456789012");
        p3.display();

        Person p4 = new Person(123456789, 10000, "Rahul", "123456789012");
        p4.display();

        Person p5 = new Person(123456789, 10000, "Rahul", "123456789012");
        p5.display();
        

 }   
}
