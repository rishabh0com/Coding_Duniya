import java.util.*;

public class Cal{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter operation (+ , - , * , /)");
        char op=sc.next().charAt(0);

        System.out.println("Enter Two numbers: ");
        int a=sc.nextInt();
        int b=sc.nextInt();

        switch(op){

            case '+':System.out.println(a+b);
            break;
            default:
        }

    }
}