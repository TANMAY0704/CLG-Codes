
import java.io.*;

public class q1 {

    public static void main(String[] args) {
        String fileName = "biodata.txt";
        String name = "Tanmay Pandey";
        String occupation = " Software Engineer";

        try (FileOutputStream fos = new FileOutputStream(fileName)) {

            byte[] nameBytes = name.getBytes();
            byte[] occupationBytes = occupation.getBytes();
            fos.write(nameBytes);
            fos.write(occupationBytes);
        } catch (IOException e) {
            System.out.println(e);
        }

        try (FileInputStream fis = new FileInputStream(fileName)) {
            int i = 0;
            while ((i = fis.read()) != -1) {
                System.out.print((char) i);
            }

        } catch (IOException e) {
            System.out.println(e);
        }
        try (FileWriter fw = new FileWriter(fileName)) {
            fw.write(" Hi I am Tanmay Pandey");
        } catch (IOException e) {
            System.out.println(e);
        }
        try (FileReader fr = new FileReader(fileName)) {
            int i = 0;
            while ((i = fr.read()) != -1) {
                System.out.print((char) i);
            }
        } catch (IOException e) {
            System.out.println(e);
        }

    }
}
