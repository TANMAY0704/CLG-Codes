import java.io.*;
import java.util.*;

class copy {
    public static void main(String[] args) {
        // count number of words in file
        try {
            File in = new File("input.txt");
            File out = new File("output.txt");
            FileReader fr = new FileReader(in);
            FileWriter fw = new FileWriter(out);
            int c;
            while ((c = fr.read()) != -1) {
                fw.write(c);
            }
            fr.close();
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    
}