import java.util.Arrays;

public class praccc {

    public static void main(String[] args) {
        int[] arr = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 1 , 4};

        // Create a new array to store the prime numbers
        int[] primeNumbers = new int[arr.length];
        int primeCount = 0;

        // Loop through the original array and check if each number is prime
        for (int i = 0; i < arr.length; i++) {
            if (isPrime(arr[i])) {
                primeNumbers[primeCount] = arr[i];
                primeCount++;
            }
        }

        // Sort the prime numbers array
        Arrays.sort(primeNumbers);

        // Copy the prime numbers array to the original array
        for (int i = 0; i < primeCount; i++) {
            arr[i] = primeNumbers[i];
        }

        // Print the sorted array
        System.out.println(Arrays.toString(arr));
    }

    private static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}
