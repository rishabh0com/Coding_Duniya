import java.util.*;

public class Switch {
    public static void main(String[] args){

        // calculator using switch case

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number a and b :");
        int a= sc.nextInt();
        int b=sc.nextInt();

        System.out.println("Enter sign operation (+ , - , * , / , %  ): ");
        char operation = sc.next().charAt(0);

        switch(operation){

            case '+':
                System.out.println(a +" + "+ b +" = " + (a+b));
                break;
            case '-':System.out.println(a +" - "+ b +" = " + (a-b));
                break;
            case '*':System.out.println(a +" * "+ b +" = " + (a*b));
                break;
            case '/':System.out.println(a +" / "+ b +" = " + (a/b));
                break;
            case '%':System.out.println(a +" % "+ b +" = " + (a%b));
                break;
            default: System.out.println("you are enter wrong sign");

        }
    }
}
