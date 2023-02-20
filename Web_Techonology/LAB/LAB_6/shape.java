import java.util.Scanner;
class twoDimensional{
    Scanner input = new Scanner(System.in);
    int length, breadth;
    void get(){
        System.out.println("Enter the length and breadth of the shape: ");
        length = input.nextInt();
        breadth = input.nextInt();
    }
    void calculate(){
        
        System.out.println("Cost of sheet : " + (length * breadth) * 40);
    }

}
class threeDimensional extends twoDimensional{
    int height;
    void get(){
        System.out.println("Enter the length, breadth and height of the shape: ");
        length = input.nextInt();
        breadth = input.nextInt();
        height = input.nextInt();
    }
    void calculate(){
        System.out.println("Cost of sheet : " + (length * breadth * height) * 40);
    }

}
public class shape {
    public static void main(String[] args) {
        
        twoDimensional t = new twoDimensional();
        threeDimensional th = new threeDimensional();
        t.get();
        t.calculate();
        th.get();
        th.calculate();
    }
}
