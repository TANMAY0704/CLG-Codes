import java.io.*;

public class asds {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Usage: java FileCopy <source_file> <destination_file>");
            return;
        }

        String sourceFile = args[0];
        String destinationFile = args[1];
        // enter in source file
        try (FileOutputStream fos = new FileOutputStream(sourceFile)) {
            fos.write("HI I am Tanmay Pandey".getBytes());
        } catch (IOException e) {
            System.out.println(e);
        }


        try {
            FileInputStream fis = new FileInputStream(sourceFile);
            FileOutputStream fos = new FileOutputStream(destinationFile);
            byte[] buffer = new byte[1024];
            int bytesRead;

            while ((bytesRead = fis.read(buffer)) != -1) {
                fos.write(buffer, 0, bytesRead);
            }

            fis.close();
            fos.close();

            System.out.println("File copied successfully!");
        } catch (IOException e) {
            System.out.println("An error occurred during the file copy: " + e.getMessage());
        }
        // output of destination

        try (FileInputStream fis = new FileInputStream(destinationFile)) {
            int i = 0;
            while ((i = fis.read()) != -1) {
                System.out.print((char) i);
            }
    }
        catch (IOException e) {
            System.out.println(e);
        }
}
}
