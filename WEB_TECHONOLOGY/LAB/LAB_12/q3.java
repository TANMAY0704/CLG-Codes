
import java.io.*;

public class q3 {
    public static void main(String[] args) {
        try (FileOutputStream fos = new FileOutputStream("f3.txt")) {
            fos.write("HI I am Tanmay Pandey".getBytes());
        } catch (IOException e) {
            System.out.println(e);
        }

        try (FileInputStream fis = new FileInputStream("f3.txt")) {
            int i = 0;
            while ((i = fis.read()) != -1) {
                System.out.print((char) i);
            }

        } catch (IOException e) {
            System.out.println(e);
        }

        try {
            FileReader fr1 = new FileReader("f3.txt");

            FileWriter fw1 = new FileWriter("f3.txt");
            int i = 0;
            while ((i = fr1.read()) != -1) {
                if ((char) i == 'a' || (char) i == 'e' || (char) i == 'i' || (char) i == 'o' || (char) i == 'u') {
                    fw1.write('@');
                } else {
                    fw1.write((char) i);
                }
            }

        } catch (IOException e) {
            System.out.println(e);
        }

    }
}
