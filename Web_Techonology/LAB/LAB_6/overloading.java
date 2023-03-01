class vol {
    void volume(double r) {
        System.out.println("Volume of Sphere: " + (4 / 3) * 3.14 * r * r * r);
    }

    void volume(double r, int h) {
        System.out.println("Volume of Cylinder: " + 3.14 * r * r * h);
    }

    void volume(double l, double b, double h) {
        System.out.println("Volume of Cuboid: " + l * b * h);
    }


    void volume(double l, double b, double h, double h1) {
        System.out.println("Volume of Prism: " + l * b * h * h1);
    }
    void volume(double r, double h) {
        System.out.println("Volume of Cone: " + (1 / 3) * 3.14 * r * r * h);
    }
}
class constructor{
    constructor(double r){
        System.out.println("Volume of Sphere: " + (4 / 3) * 3.14 * r * r * r);
    }
    constructor(double r, int h){
        System.out.println("Volume of Cylinder: " + 3.14 * r * r * h);
    }
    constructor(double l, double b, double h){
        System.out.println("Volume of Cuboid: " + l * b * h);
    }
    constructor(double l, double b, double h, double h1){
        System.out.println("Volume of Prism: " + l * b * h * h1);
    }
    constructor(double r, double h){
        System.out.println("Volume of Cone: " + (1 / 3) * 3.14 * r * r * h);
    }


}
public class overloading {

    public static void main(String[] args) {


        vol v = new vol();
        v.volume(5);
        v.volume(5, 10);
        v.volume(5, 10, 15);
        v.volume(5, 10, 15, 20);
        v.volume(5, 10, 15);
        System.out.println();
        System.out.println("Using constructor overloading");
        constructor c = new constructor(5);
        constructor c1 = new constructor(5, 10);
        constructor c2 = new constructor(5, 10, 15);
        constructor c3 = new constructor(5, 10, 15, 20);
        constructor c4 = new constructor(5, 10, 15);

    }
}
