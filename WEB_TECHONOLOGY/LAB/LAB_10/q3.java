import java.util.Scanner;

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter the size of the array: ");
            int size = Integer.parseInt(sc.nextLine());

            int[] array = new int[size];
            try {
                for (int i = 0; i < size; i++) {
                    System.out.print("Enter element " + i + ": ");
                    array[i] = Integer.parseInt(sc.nextLine());
                }
                System.out.print("Enter the index to access: ");
                int index = Integer.parseInt(sc.nextLine());
                System.out.println("Value at index " + index + " is " + array[index]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e);
            } catch (NumberFormatException e) {
                System.out.println(e);
            }
        } catch (NumberFormatException e) {
            System.out.println(e);
        }
    }
}
