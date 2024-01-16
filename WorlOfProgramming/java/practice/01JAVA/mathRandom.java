public class mathRandom {

    public void sampleMethod(){
        for(int i = 0;i <3; i++){
            for(int j =0; j<2 ; j++){
                System.out.print((int) (Math.random()*100) + " ");

            }
        }
    }
    public static void main(String[] args) {
        mathRandom obj = new mathRandom();
        obj.sampleMethod();
    }
}