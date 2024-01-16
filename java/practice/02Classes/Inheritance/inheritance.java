class Shape{
    String color;
    int side;

    public void sideInfo(){
        System.out.println("shape total side is : " + this.side);
    }
}

// inherit shape class properties -> color, method -> sideInfo()
class Square extends Shape{

    public void info(){
        System.out.println("Shape color is : "+ this.color);
    }
}

public class inheritance {
    public static void main(String[] args) {
        
        Square s1 = new Square();
        s1.color = " REd ";
        s1.info();
        s1.side = 4;
        s1.sideInfo();
    }
    
}
