#include <iostream>
using namespace std;

int a = 20;

void demo(int &x, int y, int z)
{
    a += x;
    y = a;
    z = a + y;
    cout << x << y << z << endl;
}

int main()
{
    
    int a = 15, b = 5;
    demo(::a, a, b);
    
   cout<<::a<<" "<<a<<" "<<b<<" "<<b<<" "<<endl;

    return 0;
}