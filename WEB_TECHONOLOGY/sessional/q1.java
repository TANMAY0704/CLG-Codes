class shape {
    void draw() {
        System.out.println("Drawing shape");
    }

    void erase() {
        System.out.println("erase shape");
    }
}

class circle extends shape {
    void draw() {
        System.out.println("Drawing circle");
    }

    void erase() {
        System.out.println("erase circle");
    }
}
class triangle extends shape {
    void draw() {
        System.out.println("Drawing triangle");
    }

    void erase() {
        System.out.println("erase triangle");
    }
}
class sqaure extends shape {
    void draw() {
        System.out.println("Drawing sqaure");
    }

    void erase() {
        System.out.println("erase square");
    }
}
class q1{
    public static void main(String[] args) {
        shape sh = new shape();
        sh.draw();
        sh.erase();
        circle c = new circle();
        c.draw();
        c.erase();
        triangle t = new triangle();
        t.draw();
        t.erase();
        sqaure s = new sqaure();
        s.draw();
        s.erase();
    }
}