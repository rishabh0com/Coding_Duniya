#include<iostream>
using namespace std;

int main() {
    
    int a=20,b=30, c=10;

    if(a>b){
        if(a>c){
            cout<<"greater"<<a<<endl;
        }
    }
    if(b>a){
        if(b>c){
            cout<<"greater"<<b<<endl;

        }
        else{
            cout<<"greater"<<c;
        }
    }

    return 0;
}