#include<iostream>
using namespace std;

int main() {
  int x,m,n;
  m=10;
  n=15;
  x= ++m + n++;
  cout<<"m"<<m<<endl;
  cout<<"n"<<n<<endl;
  cout<<x<<x<<endl;

  return 0;
}