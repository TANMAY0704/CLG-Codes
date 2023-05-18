import java.io.*;


public class q3 {
    private static boolean isSpecialChar(char ch) {
        return ch == '@' || ch == '#' || ch == '$' || ch == '&' || ch == '%' || ch == '*' || ch == '+' || ch == '-' || ch == '!';
    }

    public static void main(String[] args) {
        try {
            File file = new File("input.txt");
            File output = new File("output.txt");
            BufferedWriter writer = new BufferedWriter(new FileWriter(file));
            
            String s = "@ewfsf!";
            
            writer.write(s);
            writer.close();
            int c;
            BufferedReader reader = new BufferedReader(new FileReader(file));
            BufferedWriter writr = new BufferedWriter(new FileWriter(output));
            while ((c = reader.read()) != -1) {
                char ch = (char) c;
                if (isSpecialChar(ch)) {
                    writr.write(ch);
                }
            }
            reader.close();
            writr.close();
        } catch (IOException e) {
            System.err.println(e);
        }
    }
}
