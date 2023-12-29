#include<iostream>
using namespace std;

class complex {

 int a;
 int b;

 public:

 void setdata(int v1 , int v2){
     a=v1;
     b=v2;
 }

 void display(){

    cout<<"complex number is : "<<a<<" + "<<b<<"i"<<endl;
 }

 

  void sum(complex o1 , complex o2){
  
    a=o1.a + o2.a;
    b=o1.b + o2.b;
   
   
}

};
 

int main() {
    
    complex q1,q2,q3;

    q1.setdata(2,3);
    q1.display();

    q2.setdata(4,5);
    q2.display();

    q3.sum(q1,q2);
    q3.display();


   


    return 0;
}