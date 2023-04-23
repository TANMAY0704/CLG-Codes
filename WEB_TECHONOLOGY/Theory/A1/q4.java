class shape{

    public void draw(){
        System.out.println("Drawing Shape");
    }
    public void erase(){
        System.out.println("Erasing Shape");
    }

}
class Circle extends shape{
    public void draw(){
        System.out.println("Drawing Circle");
    }
    public void erase(){
        System.out.println("Erasing Circle");
    }
}

class Triangle extends shape{
    public void draw(){
        System.out.println("Drawing Triangle");
    }
    public void erase(){
        System.out.println("Erasing Triangle");
    }
}

class Square extends shape{
    public void draw(){
        System.out.println("Drawing Square");
    }
    public void erase(){
        System.out.println("Erasing Square");
    }
}



public class q4 {
    public static void main(String[] args) {
        shape s = new shape();
        s.draw();
        s.erase();
        Circle c = new Circle();
        c.draw();
        c.erase();
        Triangle t = new Triangle();
        t.draw();
        t.erase();
        Square sq = new Square();
        sq.draw();
        sq.erase();
    }    
}
