import java.util.Scanner;
// count no of object
public class object {
    static int count = 0;
    object(){
        count++;
    }
    static void display(){
        System.out.println("Number of object: " + count);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of object: ");
        int n = sc.nextInt();
        object[] obj = new object[n];
        for(int i = 0; i < n; i++){
            obj[i] = new object();
        }
        object.display();
    }

}
