public class java_note {
    public static void main (String[] args){
        //variable



        int age=30;

        //variable type
          //:primitive type
        //byte(1) , short(2) , int-4 , long-8 , float- 4,

        byte num=40;
        long phone=9026128712L; //use "L" end of number for compiler

        //: non-primitive type
        // String=" " ,
        //find length
        String name="Rishabh";
        System.out.println(name.length());


        // :concatenate - do String ko add karna

        String name1="Aman";
        String name2="shyam";


        System.out.println(name1 + " " +name2);

        //:char at
        System.out.println(name1.charAt(2));//kon si position per kon ssa character hai
        System.out.println(name1.length());

        //:replace character
        System.out.println(name1.replace('a','n'));
        System.out.println(name1);

        //: sub string : kuch word nikal sakte hai kisi word se
        System.out.println(name2.substring(2,4));





    }
}
