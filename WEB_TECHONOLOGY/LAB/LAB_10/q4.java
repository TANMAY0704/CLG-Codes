public class q4 {

    public static void main(String[] args) {
        int a = 10, b = 0, c;
        String str = null;
        int[] arr = new int[5];
        
        try {

            c = a / b; 
            str.length(); 
            arr[20] = 20; 
            int num = Integer.parseInt("abc"); 
            throw new Exception("Some other exception");
        } catch (ArithmeticException e) {
            System.out.println(e);
        } catch (NullPointerException e) {
            System.out.println(e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        } catch (NumberFormatException e) {
            System.out.println(e);
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
