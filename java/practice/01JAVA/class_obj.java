// area for define classes
class Car{
    // properties / variable -> use properties help of "this." keyword in class
    String company;
    String type;

    // method / functoion obj.func()
    public void carDetail(){
        System.out.print("Your car Company is : ");
        System.out.println(this.company);
        System.out.print("Your car Type is : ");
        System.out.println(this.type);

    }
}

// Student Class
class Student {
    String name;
    int standred;

    // // constructor function of Student Class 
    Student(){
        System.out.println("Student Costructur Called");
    }

    // // parameterized constructor
    // Student(String name , int standred){
    //     this.name = name;
    //     this.standred = standred;
    // }

    // copy constructor 
    // Student (Student s2){
    //     this.name = s2.name;
    //     this.standred = s2.standred;
    // }

    // Polymorphism -> create different sunction

    public void pinfo(String name){
        System.out.println("Name " + this.name);
    }
    public void pinfo(int standred){
        System.out.println("Standred " + this.standred);
    }
    public void pinfo(int standred , String name){
        System.out.println("Student name is :  " + this.name + " and standered is : " + this.standred);  
    }

    public void info(){
        System.out.print("Student Name : ");
        System.out.println(this.name);
        System.out.print("Student Class : ");
        System.out.println(this.standred);
    }
}

public class class_obj{
    public static void main(String[] args){

        // // create obj
        // Car car1 = new Car();
        // car1.company = "tata";
        // car1.type = "SUV";
        // // call method
        // car1.carDetail();

        // // create 2nd obj of instance
        // Car car2 = new Car();
        // car2.company = "MAruti";
        // car2.type = "sedan";
        // car2.carDetail();

        // // create student class object
        // Student Rahul = new Student();
        // Rahul.name = "Rahul";
        // Rahul.standred = 12;
        // Rahul.info();

        // for copy constructor
        // Student Rahul = new Student();
        // Rahul.name = "Rahul";
        // Rahul.standred = 12;
        // Rahul.info();


        // Student Amit = new Student(Rahul);
        // Amit.info();

        Student s0 = new Student();
        s0.name = "Aman";
        s0.standred = 5;
        s0.pinfo(s0.name);
        s0.pinfo(s0.standred);
        s0.pinfo(s0.standred,s0.name);


    }
}