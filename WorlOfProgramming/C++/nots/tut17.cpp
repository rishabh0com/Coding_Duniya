#include<iostream>
using namespace std;

    //inline function

    inline int sum(int a, int b){

        return a + b;
    }

   // defult value function  
int product(int a, int b=10){

    return a*b;
}
int main() {
    

int x=10 , y= 20;
 cout<<"sum is: "<<sum(x,y)<<endl;

cout<<"product is : "<< product(2);

cout<<"product is : "<< product(2,3);


    return 0;
}