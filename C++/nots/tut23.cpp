#include <iostream>
using namespace std;

//***  MEmory Allocation using Array ******

class Shop
{
    int itemID[100];
    float itemprice[100];
    int counter;

public:
    void counter_()
    {
        counter = 0;
    }
    void setprice();
    void disprice();
    void call();
};

void Shop ::setprice()
{

    cout << "Enter id of item:" << counter+1  << endl;
    cin >> itemID[counter];/* store value itemID[0] -> beacuse counter=0 so, itemID[0]
    again call setprice(); so itemID[0] already full so, next time input will be stroed in itemID[1] -> counter=1
    then again array box move itemID[2]--itmeID[3]-- and so on*/

    // you can under stande with call function

    cout << "Enter Price of item" << endl; // same thing apply with itemprice[counter] -> counter=0 , 1, 2---
    cin >> itemprice[counter];
    counter ++; // it is mandatory beacuse item stored in [0] then with help of array box move [1]->[2]-- so on
}

void Shop ::disprice()
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The ID of item with Price : " << itemID[i] << " is " << itemprice[i] << endl;
    }
}

void Shop :: call(){

        cout<<itemID[0]<<endl;
}


int main()
{

    Shop dukaan;
    dukaan.counter_();
    int itemNo;
    cout<<"How many item you will entring :"<<endl;
    cin>>itemNo;
    for (int i = 0; i < itemNo; i++)
    {
        dukaan.setprice();
    }
    
    
    
    dukaan.disprice();
    dukaan.call();

    return 0;
}