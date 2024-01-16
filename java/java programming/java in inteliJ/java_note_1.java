import java.util.Arrays;
public class java_note_1 {
    public static void main (String[] args){

         // Array array is a non-primitive data type
        // then use 'new' keyword
        int age = 29;

        //syntax
        //data_type[] variable_name = new data_type[size];

        int[] marks = new int[3];

        marks[0] = 94;
        marks[1] = 86;
        marks[2] = 87;

        System.out.println(marks[0]);

        //Initialization
        // default initiliazed value in java 0

        //leangth find arrya list leangth // do not use length()
        System.out.println(marks.length);

        //: short this function change arrya in Assanding order
        System.out.println(marks[0]);
        Arrays.sort(marks);// 86, 87, 94
        System.out.println(marks[0]);

        int[] mark={12,13,14};

        //2d Array
        int[][] final_mark = {{12,13,14},{96,97,98}};
        // position: 0,0  0,1  0,2
        //   value : 12   13   14

        //           1,0  1,1  1,2
        //           96   97   98

        System.out.println(final_mark[1][1]);//97
        System.out.println(final_mark[0][0]);//12


    //casting: type one convert type two

        // implicit casting : automatic casting

        double price = 10.12;
        int fp = 56;
        // casting int -> double allowed but double -> int not allowed because int size is low capacity
        // int pp= fp + price; // show error

        double pp= fp + price;
        System.out.println(pp);

        //explicit casting : forcefully casting

        int cp= fp + (int)price;
        System.out.println(cp);


        // final keyword : constant varivable

        float Pi= 3.14F; // this variable can be change

        final float PI= 3.14F; // Cannot change this will constant entire program.


    }
}
