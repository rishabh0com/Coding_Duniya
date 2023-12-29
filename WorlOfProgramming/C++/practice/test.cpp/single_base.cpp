#include<iostream>
using namespace std;

class car{

    string car_name;
    int model_name;
    
    public:
    

    car(){
        static int count=1;
        cout<<"Enter car_name and model car :"<<count<<endl;
        cin>>car_name;
        cin>>model_name;

        cout<<count<<" car name: "<<car_name<<endl;
        cout<<count<<" car wheel: "<<model_name<<endl;

        count++;
    }
};

class BMW : private car{



};

int main() {
    
BMW o1,o2;

    return 0;
}