#include<iostream>
using namespace std;

class Area {

int area;

public:
    Area(){

        area=0;
    }

    Area(int a){

        area=a*a;
        cout<<"Area of Square: "<<area<<endl;
    }  

};

int main() {

    Area(4);

    return 0;
}