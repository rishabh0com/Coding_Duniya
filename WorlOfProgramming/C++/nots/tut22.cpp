// OOPs - classes and objects

    //C++ --> initially called -> c with classes by stroustroup

    //structures had limitations
    //      members are public
    //       no methoda
    // classes -> structure + more

    /* 
    ese bhi class and object bana sakte hai
    
    class employee{

        //class defenition
    }harry, rohan, mohar ; 
    */
   


   // ++ Nesting of member Function

#include<iostream>
#include<string>
using namespace std;

class binary {

    int a;

    public:

    void enter_bin(void );
    void chk_bin(void);
    void display(void);
};

void binary :: enter_bin(void ){
    cout<<"enter NUmber"<<endl;
    cin>>a;
}
void binary :: chk_bin(void){

    if( a==1 or a==0){
        cout<<"Number is Binary"<<endl;
    }
    else{
        cout<<"Entred wrong number"<<endl;
    }
    
}

void binary::display(void){
chk_bin();
}

int main(){
binary n;
n.enter_bin();
n.display();
    return 0;
}