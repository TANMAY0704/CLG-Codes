abstract class Volume {
    abstract void find_volume();
}

class Sphere extends Volume {
    double radius;

    Sphere(double radius) {
        this.radius = radius;
    }

    void find_volume() {
        double volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
        System.out.println("Volume of Sphere: " + volume);
    }
}

class Cylinder extends Volume {
    double radius;
    double height;

    Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    void find_volume() {
        double volume = Math.PI * Math.pow(radius, 2) * height;
        System.out.println("Volume of Cylinder: " + volume);
    }
}

class Cuboid extends Volume {
    double length;
    double width;
    double height;

    Cuboid(double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }

    void find_volume() {
        double volume = length * width * height;
        System.out.println("Volume of Cuboid: " + volume);
    }
}

class Cone extends Volume {
    double radius;
    double height;

    Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    void find_volume() {
        double volume = (1.0 / 3.0) * Math.PI * Math.pow(radius, 2) * height;
        System.out.println("Volume of Cone: " + volume);
    }
}

public class q3 {
    public static void main(String[] args) {
        Volume volume;

        volume = new Sphere(5);
        volume.find_volume();

        volume = new Cylinder(2, 7);
        volume.find_volume();

        volume = new Cuboid(3, 4, 5);
        volume.find_volume();

        volume = new Cone(4, 8);
        volume.find_volume();
    }
}
