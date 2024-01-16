// Object Oriented Programming

#include<iostream>
using namespace std;

// syntax of class:

/*  class class_name 
     {
        declare data private/public

        private:
        int a; //data

        public:
        int b; data

        // declare function:

        int sum(int a , int b){

            //statement
        }

        int add(int x, int y); // this function body outside
     }*/

     // outside class function declaration fetching

     /* data_type class_name scope_operator  function_name
     
        int add class_name  ::   add(int x, int y){
            //statement
        }*/

class employee
{
    private:
    int a, b, c;

    public:
    int d ,e ;

    void setdata(int a, int b, int c);// Declaration

    void getdata(){
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
        cout<<"value of c : "<<c<<endl;
        cout<<"value of d : "<<d<<endl;
        cout<<"value of e : "<<e<<endl;
    }
};

 void employee :: setdata(int x, int y, int z){
      a=x;
      b=y;
      c=z;

 }

int main() {

    employee harry; // object declaration
    // harry.a=100; //this will through error beacuse it is private data
    harry.d=34;
    harry.e=39;
   
    harry.setdata(3,2,4);
    harry.getdata();
    

    return 0;
}