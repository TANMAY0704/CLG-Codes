 abstract class Address {
    void address(){

    }
}
class HomeAddress extends Address{
    String name,Address;
    HomeAddress(String name,String Address){
        this.name = name;
        this.Address = Address;
    }
    void address(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+Address);
    }
}

class OfficeAddress extends Address{
    String name,Address;
    OfficeAddress(String name,String Address){
        this.name = name;
        this.Address = Address;
    }
    void address(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+Address);
    }
}
class SchoolAddress extends Address{
    String name,Address;
    SchoolAddress(String name,String Address){
        this.name = name;
        this.Address = Address;
    }
    void address(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+Address);
    }
}
public class q1 {
    public static void main(String[] args) {
        Address h = new HomeAddress("Rahul","Delhi");
        Address o = new OfficeAddress("Rahul","Delhi");
        Address s = new SchoolAddress("Rahul","Delhi");
        h.address();
        o.address();
        s.address();
    }
}