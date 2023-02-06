public class fibonaaci {
    public static void main(String[] args) {
        int n1 =0 , n2 = 1, n3, i , c = 10;
        System.out.println(n1);
        System.out.println(n2);
        for (i = 0 ; i < c; i++)
        {
            n3 = n1 + n2 ;
            System.out.println(n3);
            n1 = n2;
            n2 = n3;
        }
    }
}
