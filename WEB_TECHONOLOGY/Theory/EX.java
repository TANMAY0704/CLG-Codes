class CheckArgumentException extends Exception {
    public CheckArgumentException(String message) {
        super(message);
    }
}

public class EX {
    public static void checkArgumentCount(String[] args) throws CheckArgumentException {
        if (args.length < 5) {
            throw new CheckArgumentException("Insufficient number of arguments");
        }
        else{
            int sum=0;
            for(int i=0;i<args.length;i++){
                sum+=Integer.parseInt(args[i]);
            }
            System.out.println("Sum: " + sum);
        }
    }
    public static void main(String[] args) {
        try {
            checkArgumentCount(args);
            System.out.println("Sufficient number of arguments provided.");
        } catch (CheckArgumentException e) {
            System.out.println(e.getMessage());
        }
    }

}


