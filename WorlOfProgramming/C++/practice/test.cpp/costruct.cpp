#include<iostream>
using namespace std;

class sum{

    int a;
    int b;

    public:

    sum(); // constructor declaration

    void print(){
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }

};

sum :: sum(){
    a=10;
    b=20;
}

int main() {
    
sum o1; //constructor automatically invokwd when object is created
o1.print();
    return 0;
}