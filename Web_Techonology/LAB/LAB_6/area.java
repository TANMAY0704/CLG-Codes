class cal{
    // constructor overloading to calculate area of circle, rectangle and triangle
    // area of circle
    cal(double r){
        System.out.println("Area of Circle: " + 3.14 * r * r);
    }
    // area of rectangle
    cal(double l, double b){
        System.out.println("Area of Rectangle: " + l * b);
    }
    // area of triangle
    cal(double b, double h, double h1){
        System.out.println("Area of Triangle: " + (b * h * h1) / 2);
    }
    


}
public class area {
    public static void main(String[] args) {
        
        cal c = new cal(5);
        cal c1 = new cal(5, 10);
        cal c2 = new cal(5, 10, 15);
    }
}
