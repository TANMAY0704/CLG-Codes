import java.util.Scanner;

public class QN1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name, roll, section, branch;
        System.out.print("Enter Name : ");
        name = input.nextLine();
        System.out.print("Enter Roll no : ");
        roll = input.nextLine();
        System.out.print("Enter Section : ");
        section = input.nextLine();
        System.out.print("Enter Branch: ");
        branch = input.nextLine();
        System.out.println("\nDisplaying details :"
                + "\n--------------------------------");
        System.out.println("Name :\t\t" + name);
        System.out.println("Roll No :\t" + roll);
        System.out.println("Section :\t" + section);
        System.out.println("Branch :\t" + branch);
        input.close();
    }
}