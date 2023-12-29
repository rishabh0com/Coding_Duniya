#include<iostream>
using namespace std;

//Functin Overloding ++++++++++

int add(float a, int  b){
cout<<"Two argument function"<<endl;
    return a+b;
    
}

float add(int a, int b, int c){
     cout<<"Three argument function"<<endl;\
    return a+b+c;
   
}
//volume of clynder
float volume(double r, int h){
    return(3.14 * r *r *h);
}

// rectrangular box
int volume(int l, int b , int h){

    return (l*b*h);
}
int main() {

    cout<<"volume of clynder: "<<volume(2,8)<<endl;
    cout<<"volume of cuboid : "<<volume(1,2,3)<<endl;
    
// cout<<"sum 3 + 6: "<<add(3,6)<<endl;
// cout<<"sum 3 + 4 + 6: "<<add(3,4,6)<<endl;

    return 0;
}