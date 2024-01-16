import java.util.*;
class triangle {
    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter leangth and breath:");
        float length = sc.nextFloat();
        float breath = sc.nextFloat();

        float area = ((length*breath)/2);

        System.out.println("area of triangle is: " + area);

        
    }
}
