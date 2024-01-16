class A {
    int x , y ;
    A(int a, int b){
        x=a;
        y=b;
    }
    // copy constryctor
    
    A(A ref){
        int m = ref.x;
        int n = ref.y;
        System.out.println(n + " " + m);
    }
}


public class copyConstructor {

    public static void main(String[] args){

        A obj1 = new A(2,3);
        // copy constructor take object instance as a parameter 
        A obj2 = new A(obj1);
    }
}