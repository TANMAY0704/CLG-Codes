class NoTriangleFormed extends Exception{
    NoTriangleFormed(String s){
        super(s);
    }
}
class triangle{
    int a,b,c;
    triangle(int a, int b, int c){
        this.a=a;
        this.b=b;
        this.c=c;
    }
    void check() throws NoTriangleFormed{
        if(a+b>c && b+c>a && a+c>b){
            System.out.println("Triangle can be formed");
        }
        else{
            throw new NoTriangleFormed("Triangle cannot be formed");
        }
    }

    void find_area(){
        int s=(a+b+c)/2;
        double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area of triangle is "+area);
    }
    void find_perimeter(){
        int perimeter=a+b+c;
        System.out.println("Perimeter of triangle is "+perimeter);
    }
}
public class trig {
    public static void main(String[] args) {
        triangle obj=new triangle(3,1,5);
        try{
            obj.check();
            obj.find_area();
            obj.find_perimeter();
        }
        catch(NoTriangleFormed e){
            System.out.println(e);
        }
    }
}
