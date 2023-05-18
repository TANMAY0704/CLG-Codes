import java.util.*;

public class rev {
    void reverse(Stack<Integer> stack1, Stack<Integer> stack2) {
        if (stack1.isEmpty()) {
            return;
        }
        int temp = stack1.pop();
        stack2.push(temp);
        reverse(stack1, stack2);
    }

    public static void main(String[] args) {
        Stack<Integer> stack1 = new Stack<Integer>();
        Stack<Integer> stack2 = new Stack<Integer>();
        stack1.push(1);
        stack1.push(2);
        stack1.push(3);
        stack1.push(4);
        rev obj = new rev();
        System.out.println(stack1);       
        obj.reverse(stack1, stack2);
        System.out.println(stack2);
    }
}
