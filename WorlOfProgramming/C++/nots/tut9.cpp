#include <iostream>
using namespace std;
// if else tutorial
int main()
{
    //***********if else **********

    // int age;
    // cout << "enter your age" << endl;
    // cin >> age;

    // if (age < 18 && age > 13)
    // {
    //     cout << "you are a teen ager come with kids pass";
    // }
    // else if (age < 13)
    // {

    //     cout << "you cannot come my party";
    // }
    // else if (age > 60)
    // {
    //     cout << "you are over age please rest in our house" << endl;
    // }

    //*********switch case***********

    char day;

    cin >> day;
    switch (day)
    {
    case 'm':
        cout << "monday";

        break;
    case 't':
        cout << "tuesday";
        break;

    default:
        cout << "xyz";
        break;
    }

    return 0;
}