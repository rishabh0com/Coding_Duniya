import java.util.*;
public class FC {
    public static void main(String[] args)
    {
      Scanner sc = new Scanner(System.in);

      System.out.println("Enter Farenheit: ");
      int F=sc.nextInt();

      int C;
      C=((F-32)*5)/9;

        System.out.println(C+"°"+"C");

    }
}