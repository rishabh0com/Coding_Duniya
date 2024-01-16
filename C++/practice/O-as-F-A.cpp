#include<iostream>
using namespace std;

class Complex {

    int a;
    int b;

    public:

    void setdata(int v1 , int v2){

        a=v1;
        b=v2;
    }

    void display(){

        cout<<a<<" + "<<b<<"i"<<endl;

    }

    void sum (Complex o1, Complex o2){
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }
};

int main() {

Complex o1,o2,o3;

o1.setdata(1,2);
o1.display();

o2.setdata(3,4);
o2.display();

o3.sum(o1,o2);
o3.display();


    return 0;
}