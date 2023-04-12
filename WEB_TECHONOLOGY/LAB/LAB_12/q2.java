
import java.io.*;

public class q2 {
    public static void main(String[] args) {

        try {
            FileWriter fw1 = new FileWriter("f1.txt");
            FileWriter fw2 = new FileWriter("f2.txt");
            fw1.write(" Hi I am Tanmay Pandey");
            fw2.write(" Hi I am Tanmay Pandey");
        } catch (IOException e) {
            System.out.println(e);
        }

        try {
            FileReader fr1 = new FileReader("f1.txt");
            FileReader fr2 = new FileReader("f2.txt");
            boolean flag = true;
            int i = 0, y = 0;
            while ((i = fr1.read()) != -1 && (y = fr2.read()) != -1) {
                if ((char) i == (char) y) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                System.out.println("Both files are same");
            } else {
                System.out.println("Both files are not same");
            }
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
