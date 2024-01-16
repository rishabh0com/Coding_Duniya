#include <iostream>
using namespace std;

int main()
{
    // pointer is a variable that hold another variable address;

    int a = 45;
    int *p = &a;
//----> & (address of) Operator
    cout <<"address of &a=" <<&a<< endl;
    cout<<"address of &a=p="<<p<<endl;

    //----> dereference operator *
    cout<<"value stored in p=*p="<<*p<<endl;

    //pointer to pointer

    int **c=&p;

    cout<<"print  p:"<<p<<endl;
    cout<<"print  *p:"<<*p<<endl;
    cout<<"print &p:"<<&p<<endl;
    cout<<"print  c:"<<c<<endl;
    cout<<"print **c:"<<**c<<endl;

    return 0;
}