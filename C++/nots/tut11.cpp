#include<iostream>
using namespace std;

int main() {

    // ****break*******
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     if(i==2){
    //         break;
    //     }
       
    // }

    //********continue***//skip the position
    for (int i = 0; i < 4; i++)
    {
       
        if(i==2){
            continue;
        }
         cout<<i<<endl;
    }
    
    

    return 0;
}       