import java.util.Scanner;
class data {
    double height , breadth;
    Scanner sc = new Scanner(System.in);
    void get_data(){
        System.out.print("Enter the height and breadth : ");
        height = sc.nextDouble();
        breadth = sc.nextDouble();
    }
    void put_data(){
        System.out.println("Entered values are : " + height + "," + breadth);
    }


}
  
class Rectangle extends data{
    void areaRectangle(){
        double area = height * breadth;
        System.out.println("Area of Rectangle is : " + area);
    }
    void perimeterRectangle(){
        double perimeter = 2 * (height + breadth);
        System.out.println("Perimeter of Rectangle is : " + perimeter);
    }
}

class Triangle extends data {
    void areaTriangle(){
        double area = 0.5 * height * breadth;
        System.out.println("Area of Triangle is : " + area);
    }
    void perimeterTriangle(){
        double perimeter = height + breadth + Math.sqrt(height*height + breadth*breadth);
        System.out.println("Perimeter of Triangle is : " + perimeter);
    }
}

public class q1 {
    public static void main(String[] args) {
        
        Rectangle r = new Rectangle();
        r.get_data();
        r.put_data();
        r.areaRectangle();
        r.perimeterRectangle();
        System.out.println();
        Triangle t = new Triangle();
        t.get_data();
        t.put_data();
        t.areaTriangle();
        t.perimeterTriangle();
    }
}