//input stream buffer
class emp{
    String name;
    int id;
    float salary;
    emp(){
        name = "Tanmay";
        id = 123;
        salary = 10000;
    }
    emp(String n, int i, float s){
        name = n;
        id = i;
        salary = s;
    }
    // copy constructor
    emp(emp e){
        name = e.name;
        id = e.id;
        salary = e.salary;
    }
    void show(){
        System.out.println("Name: " + name + " ID: " + id + " Salary: " + salary);
    }
}
public class employee {
    public static void main(String[] args) {
     
        emp e1 = new emp();
        emp e2 = new emp("Tanmay", 122133, 10400);
        emp e3 = new emp(e1);
        e1.show();
        e2.show();
        e3.show();
    }
}
