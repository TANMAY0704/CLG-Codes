import java.util.Scanner;

public class complex {
    int real, img;

    void get() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the real part: ");
        real = sc.nextInt();
        System.out.println("Enter the imaginary part: ");
        img = sc.nextInt();
    }

    void display() {
        if (img < 0){ 
            img = -img;
            System.out.println("Complex number: " + real + " - " + img + "i");
        }
        else if (img == 0 ){

            System.out.println("Complex number: " + real);
        }
        else if (img == 1){
            System.out.println("Complex number: " + real + " + i");
        }
        else
            System.out.println("Complex number: " + real + " + " + img + "i");
    }

    void add(complex c1, complex c2) {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }

    void sub(complex c1, complex c2) {
        real = c1.real - c2.real;
        img = c1.img - c2.img;
    }

    public static void main(String[] args) {
        complex c1 = new complex();
        complex c2 = new complex();
        complex c3 = new complex();
        c1.get();
        c2.get();
        c3.add(c1, c2);
        c3.display();
        c3.sub(c1, c2);
        c3.display();
    }
}
