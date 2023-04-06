public class q4 {
    public static void main(String[] args) {
        String str = "welcome to Java Programming";

        
        if (str.equals("welcome to Java Programming")) {
            System.out.println("Strings are equal.");
        } else {
            System.out.println("Strings are not equal.");
        }

        
        if (str == "welcome to Java Programming") {
            System.out.println("Strings are equal.");
        } else {
            System.out.println("Strings are not equal.");
        }

        
        String otherStr = "hello world";
        int result = str.compareTo(otherStr);
        if (result == 0) {
            System.out.println("Strings are equal.");
        } else if (result < 0) {
            System.out.println("String str is less than otherStr.");
        } else {
            System.out.println("String str is greater than otherStr.");
        }

           
        String str1 = "Hello";
        String str2 = "hello";
        if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Strings are equal ignoring case.");
        } else {
            System.out.println("Strings are not equal ignoring case.");
        }

        
        int length = str.length();
        System.out.println("Length of the string is: " + length);
    }
}
