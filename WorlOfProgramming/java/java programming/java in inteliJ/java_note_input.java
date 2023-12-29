import java.util.Scanner;
public class java_note_input {

    public static void main (String[] args){

        //write code here

        //Input in JAVA

        Scanner sc = new Scanner(System.in);

        System.out.println("Input Your age:");
        int age = sc.nextInt();

        System.out.println(age);

        // float variable_name = sc.nextFloat();
        // double variable_name =sc.nextDouble():

        System.out.println("Input jeans price");
        float price = sc.nextFloat();
        double pp = sc.nextDouble();

        System.out.println(price);
        System.out.println(pp);


        // Input String : declare string variable then input
        System.out.println("Enter your name: ");
        String name = sc.next(); // sc.next work for string
        System.out.println(name);

        // Input full string with space
         //nextline();

        System.out.println("Enter naam :");
        String naam = sc.nextLine();
        System.out.println(naam);
    }
}
