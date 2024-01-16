//swap two number using call by refrence

#include<iostream>
using namespace std;

void swap(int *x,int *y){

  

   
    int temp= *x;
     *x= *y;
    *y= temp;
}
int main() {
    
    int a=4,b=5;
    swap(a,b);
cout<<"A is:"<<a<<endl<<"B is:"<<b;
    return 0;
}