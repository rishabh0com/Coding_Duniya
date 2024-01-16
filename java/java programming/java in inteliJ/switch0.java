import java.util.*;
public class switch0 {
    public static void main (String[] args ){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter day wise number:");
        int day = sc.nextInt();

        // this is a switch case statement

        switch(day){
            case 1 :
                System.out.println("monday");
                break;

            case 2:
                System.out.println("Tuesday");
                break;

            case 3:
                System.out.println("Wednesday");
                break;

            case 4:
                System.out.println("thrusday");

            case 5:
                System.out.println("Friday");
                break;

            case 6:
                System.out.println("Saturday");
                break;

            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("You enter invalid Number");
        }

    }
}
