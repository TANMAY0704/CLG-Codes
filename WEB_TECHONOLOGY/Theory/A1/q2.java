class TwoShape{
    private double width , height ;
    private String name ;
    TwoShape(int width , int height , String name){
        this.width = width ;
        this.height = height ;
        this.name = name ;
    }
    void getwidth(){
        System.out.println("Width : " + width);
    }
    void getheight(){
        System.out.println("Height : " + height);
    }
    void getname(){
        System.out.println("Name : " + name);
    }
    void setwidth(double width){
        this.width = width;

    }
    void setheight(double height){
        this.height = height;
    }
    void setname(String name){
        this.name = name;
    }
    void showDim(){
        System.out.println("Width and Height : " + width + " " + height);
    }
    abstract void area(){}
}

public class q2 {
    
}
