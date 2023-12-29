// #include<iostream>
// using namespace std;
  
  
//   //function...............


// int sum(int a, int b){ // a and b are formal parameter

//     int c;
//     c=a+b;

//     return c;
// }
// int main() {
    
// int num1,num2;  // num1 and num 2 are actual parameter

// cout<<"Enter two numbers:"<<endl;
// cin>>num1>>num2;

// cout<<"sum is:"<<sum(num1,num2);
//     return 0;
// }

#include<iostream>
using namespace std;

//function prototype.......


int mul(int a, int b);


int main() {

int n1,n2;

cout<<"enter two number:";
cin>>n1>>n2;

cout<<"MUltiply is:"<<mul(n1,n2);

    

    return 0;
}

int mul(int a, int b){

    int c=a*b;
    return c;
}