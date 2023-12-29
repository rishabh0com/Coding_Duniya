

class Pro{

    public static void check(char ans){
        if(Character.isDigit(ans)){
            System.out.println(ans + " is a Digit");
        }
        else{
            System.out.println(ans + " is not a digit");
        }
        if(Character.isWhitespace(ans)){
            System.out.println(ans + " is a space character");
        }
        else{
            System.out.println(ans + " is not a space Character");
        }
    }
}

public class checkChar{

    //     public static void check(char ans){
    //     if(Character.isDigit(ans)){
    //         System.out.println(ans + " is a Digit");
    //     }
    //     else{
    //         System.out.println(ans + " is not a digit");
    //     }
    //     if(Character.isWhitespace(ans)){
    //         System.out.println(ans + " is a space character");
    //     }
    //     else{
    //         System.out.println(ans + " is not a space Character");
    //     }
    // }


    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);


        // Pro pro1 = new Pro();
        // pro1.check('a'); 'a';
        Pro p1 = new Pro();
        p1.check('1');



    }
}