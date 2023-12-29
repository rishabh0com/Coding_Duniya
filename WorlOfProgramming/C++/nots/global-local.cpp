#include<iostream>

using namespace std;

int a=30;
int main(){

int a,b;
cout<<"enter the value of a: "<<endl;
cin>>a;
cout<<"enter the value of b: "<<endl;
cin>>b;

cout<<"value of a: "<<a<<endl<<"value of b: "<<b<<endl;


cout<<"\n";

cout<<"display value of global variable a:"<<::a; //" :: " scope operator
                                                  // it is use for display global variable
    return 0;
}