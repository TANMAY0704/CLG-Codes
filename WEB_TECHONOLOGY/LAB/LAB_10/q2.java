public class q2 {

    public static void main(String[] args) {
        int a = 10, b = 0, c;
        String str = null;
        int[] arr = new int[5];

        try {
            
            c = a / b; 
        } catch (ArithmeticException e) {
            System.out.println(e);
        }

        try {
            
            str.length(); 
        } catch (NullPointerException e) {
            System.out.println(e);
        }

        try {
            
            arr[10] = 20; 
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }

        try {
        
            int num = Integer.parseInt("sdas");
        } catch (NumberFormatException e) {
            System.out.println(e);
        }
    }

}
