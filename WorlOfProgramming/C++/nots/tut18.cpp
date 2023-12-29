// //recursion & Recursive Function

// #include<iostream>
// using namespace std;

// int factorial (int n){

//      if (n<=1 || n==0)
//          return 1;

//     return n*factorial(n-1);
// }

// int main() {
    
// int num;
// cout<<"Enter number: "<<endl;
// cin>>num;
// cout<< "Factorial is :"<<factorial(num)<<endl;

//     return 0;
// }


// fibonacci Series

#include<iostream>
using namespace std;

int fib(int n){

    if (n<2){
        return 1;
    }

    return fib(n-2)+fib(n-1);

}
int main() {

    int num;
    
    cout<<"enter number: "<<endl;
    cin>>num;

    cout<<"THe fibonacci series "<<num<<" is "<<fib(num)<<endl;

    return 0;
}