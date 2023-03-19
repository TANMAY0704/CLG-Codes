import java.util.Scanner;
class Details{
    String name,Address;
    int meter_no;
    Details(String name,String Address,int meter_no){
        this.name = name;
        this.Address = Address;
        this.meter_no = meter_no;
    }
    void show(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+Address);
        System.out.println("Meter No: "+meter_no);
    }

}
class PowerBill extends Details{
    int n;
    float amt;
    PowerBill(String name,String Address,int meter_no,int n){
        super(name,Address,meter_no);
        this.n = n;
        this.amt = 0;
    }
    void cal(){
        if(n<=100){
            amt = n*1.20f;
        }
        else if(n<=300){
            amt = 100*1.20f + (n-100)*2.00f;
        }
        else{
            amt = 100*1.20f + 200*2.00f + (n-300)*3.00f;
        }
    }
    void show(){
        super.show();
        System.out.println("Units: "+n);
        System.out.println("Amount: "+amt);
    }

}
public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name: ");
        String name = sc.nextLine();
        System.out.print("Enter address: ");
        String Address = sc.nextLine();
        System.out.print("Enter meter no: ");
        int meter_no = sc.nextInt();
        System.out.print("Enter units: ");
        int n = sc.nextInt();
        PowerBill p = new PowerBill(name,Address,meter_no,n);
        p.cal();
        p.show();
    }
}
