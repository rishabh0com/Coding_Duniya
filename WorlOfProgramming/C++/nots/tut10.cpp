#include<iostream>
using namespace std;

int main(){

// table printing with help of do while loop

int num;
cout<<"Enter number: "<<endl;
cin>>num;
int i=1;
int table;
do{
    table=i*num;
    cout<<table<<endl;
    cout<<num<<"*"<<i<<"="<<i*num<<endl;
    i++;

}while(i<=10);

    return 0;
}