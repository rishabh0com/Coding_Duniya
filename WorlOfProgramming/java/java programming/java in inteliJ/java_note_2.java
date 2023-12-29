import java.util.*;
public class java_note_2 {
    public static void main (String[] agrs){

    //write code here:

        //: Operator :-

        int a=34;
        int b=5;
        System.out.println(a/b);
        System.out.println((double)a/b);
        System.out.println(a%b);


        //; unary operator :-

        int num = 1;
        num = num + 1;

        num++; // ++ unary operator ++n, --n, n--

        System.out.println(num);

        // : Comparison Operator
        // a == b
        // a != b
        // a > b
        // a < b

        int x=12 , y=90 ;
        System.out.println(x == y);


        // : Conditional Statement  (if else )

        boolean sunUp = false;

        if (sunUp == true)
            System.out.println("day");
        else
            System.out.println("night");

        Scanner sc = new Scanner(System.in);

//        System.out.println("Enter your age:");
//        int age = sc.nextInt();
//
//        if (age > 18)
//            System.out.println("You can vote");
//        else
//            System.out.println("Cant't Vote");

        // : Logical Operators
        // &&  : and operator   true && true  -> pass
        // ||  : or operator    true || false -> pass
        // !   : not operator   true -> false  false -> true

        // : Loops :-

        // for loop

        for(int i=50; i>=0 ; i=i-1){

            System.out.println(i);
        }

        //while loop  :-

        /* while (condition){
           //statement
           i++; updation
          }  */

        // do while loop :-

        /* do {
          // statement
          }
          while(condition);
         */

//
//        // maths class function
//
//        // read maximum value  Math.max(a , b)
//        System.out.println(Math.max(34, 100));
//
//        // Math.min(a, b) for find minimum valur
//        System.out.println(Math.min(67 ,90));
//
//        // Math.random this function return random value every time
//        System.out.println(Math.random());
//        System.out.println((int)(Math.random()*100)); //typecasting
    }
}
