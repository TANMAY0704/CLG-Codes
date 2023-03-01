import java.util.Scanner;

public class check1 {
    public static void main(String[] args) {
        // check for same number in array

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                count++;
            }
        }
        if (count > 0) {
            System.out.println("There are " + count + " same numbers in array.");
        } else {
            System.out.println("There are no same numbers in array.");
        }
    }
}
