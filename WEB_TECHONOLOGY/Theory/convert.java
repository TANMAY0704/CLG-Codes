import java.io.*;

public class convert {
    public static void main(String[] args) {

        File f = new File("input.txt");
        File f1 = new File("output.txt");
        try {
            FileOutputStream fin = new FileOutputStream(f);
            String s = "Hi I am Tanmay Pandey";
            byte[] b = s.getBytes();
            fin.write(b);
            fin.close();

            FileInputStream fis = new FileInputStream(f);
            FileOutputStream fos = new FileOutputStream(f1);
            int i = 0;
            while ((i = fis.read()) != -1) {
                fos.write((char) i);
            }
            fis.close();
            fos.close();
        } catch (IOException e) {
            System.out.println(e);
        }


    }
}