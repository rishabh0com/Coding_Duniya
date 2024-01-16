#include<iostream>
using namespace std;

int main() {
    
    int *ptr=new int;

    delete ptr;

    delete ptr;

    cout<<"compiled and executed"<<endl;

    // display single character -> cout.put();
    cout.put('H');

    return 0;
}