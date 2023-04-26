public class q3 {
    public static void main(String[] args) {
        String s = "I am proud to be a KIIT    student";
        String[] words = s.split(" ");
        for (String w : words) {
            System.out.println(w);
        }
        String s1 = s.replace("KIIT", "KIIT University");
        System.out.println(s1);

        String s2 = s.trim();
        System.out.println(s2);

        char c = s.charAt(0);
        System.out.println(c);

        String s3 = s.substring(0, 5);
        System.out.println(s3);
    }
}