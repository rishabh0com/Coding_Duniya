// import java.util.Arrays;
// import java.util.Scanner;
import java.util.*;

public class dType{
    public static void main(String[] args){
        System.out.println("Hello World");
        // String name = "Rishabh"; // string is immutable in JAVA
        // String newName = name.replace('h', 'm');
        // System.out.println(newName);
        // System.out.println(name.substring(0,4));

        // int[] arr = new int[3];
        // arr[0] = 141;
        // arr[1] = 23;
        // arr[2] = 90;
        // System.out.println(arr.length);
        // System.out.println(arr[0]);
        // Arrays.sort(arr);
        // System.out.println(arr[0]);

        // //2D array
        // int[][] matrix = {{12,45},{76,36}};
        // System.out.println(matrix[0][1]);

        // // casting
        // double a = 12.23;
        // int b = (int)a; // explicit casting
        // System.out.println(b);
        // double price = a + 12;  // implecit casting
        // System.out.println(price);
        
        // // Math func
        // System.out.println(Math.max(3,5)); // this function accept only two numbers -> .min
        // // Math.random
        // System.out.println((int) (Math.random() * 100)); // originaly it give long type value Math.random() -> 0.24344354545645

        // Input in java
        // 1. create Scanner class object -> Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(System.in);
        
        // // input integer
        // System.out.print("Input your age : ");
        // int age = sc.nextInt();
        // System.out.println(age);
        // // float input
        // System.out.print("Enter your heigth x inch y cm : " );
        // float heigth = sc.nextFloat();
        // System.out.println(heigth);
        // // input String
        // System.out.println("Enter your full Name: ");
        // String name = sc.nextLine();
        // System.out.print(name);

        // //if else 
        // boolean isAge = true;
        // if (isAge != false){
        // System.out.println("You can Vote ");
        // System.out.println("yes");
        // }
        // else
        // System.out.println("You can not vote ");

        int num;
        do{
            System.out.print("Enter positive Number : ");
            num = sc.nextInt();
            System.out.print("Your NUmber : ");
            System.out.println(num);
        }while(num >= 0);

        // 
        sc.close();
    
    }
}