#include <iostream>
using namespace std;

int main()
{

    // Array *********

    int marks[] = {32, 56, 78};

    cout << "marks[0] :" << marks[0] << endl;
    cout << "marks[1] :" << marks[1] << endl;
    cout << "marks[2] :" << marks[2] << endl;

    // int num[3];

    // num[0] = 224;
    // num[1] = 765;
    // num[2] = 567;

    // cout << "num[0] :" << num[0] << endl;
    // cout << "num[1] :" << num[1] << endl;
    // cout << "num[2] :" << num[2] << endl;

    // int count[3];

    // cout << "enter numbers:-" << endl;
    // int i;
    // for (int i = 0; i < 3; i++)
    // {
    //     /* code */
    //     cout << "Enter count"
    //          << "[" << i << "]:";
    //     cin >> count[i];
    // }

    // for (int i = 0; i < 3; i++)
    // {

    //     cout << "count"
    //          << "[" << i << "]:" << count[i] << endl;
    // }

    // // you can change value of an array like variable;
    // num[0] = 900;
    // cout << "num[0] :" << num[0] << endl;


// pointer and array ...

//addresss
int *p=marks;

cout<<"address of marks[0]:"<<p<<endl; //p
cout<<"address of marks[1]"<<p+1<<endl;//p++ = p+1
cout<<"address of marks[2]"<<p+2<<endl;
cout<<endl;
//values
cout<<"value of marks[0]:"<<*p<<endl; //p
cout<<"value of marks[1]"<<*(p+1)<<endl;//
cout<<"value of marks[2]"<<*(p+2)<<endl;

    return 0;
}