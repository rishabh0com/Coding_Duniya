#include<iostream>
#include<string>
using namespace std;

// today's topic is structure oky

struct employee
{
    int age;
    char favchar;
    double salary;

};

//Union...
union money
{
    int rice;
    double rupee;
    char cha;
};


int main() {

   enum meal{ breakfast, lunch, dinner}; // 0>>1>>2
meal A=breakfast;
cout<<A;
//    cout<<breakfast<<endl;
//    cout<<lunch<<endl;
//    cout<<dinner<<endl;

//     struct employee Rishabh;
//     Rishabh.age=19;
//     Rishabh.favchar='R';
//     Rishabh.salary=600000;
    

//     cout<<Rishabh.age<<endl;
//     cout<<Rishabh.favchar<<endl;
//     cout<<Rishabh.salary<<endl;

//UNION.....................
    
// union money m1;// ek baar me ek hi use kar sakte ahi
// m1.rice=45;
// cout<<m1.rice<<endl;
// m1.cha='c';
// // cout<<m1.cha<<endl;
// m1.rupee=3400;
// cout<<m1.rupee<<endl;





    return 0;
}

//Another type of defining structure

// #include<iostream>
// using namespace std;

// typedef struct employee // typedef is a keyword to simplify the structure
// {
//     int age;
//     string name;
//     double salary;
    
// }ep; // simple you call structure using "ep" in place of "struct employee Rishabh"

// int main() {
     
//      ep Rishabh;
//     Rishabh.age=19;
//     Rishabh.salary=600000;
    

//     cout<<Rishabh.age<<endl;
//     cout<<Rishabh.salary<<endl;


//     return 0;
// }