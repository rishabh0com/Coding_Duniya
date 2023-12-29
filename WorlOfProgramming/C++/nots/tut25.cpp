// #include <iostream>
// using namespace std;
// 
// Array of object
// class karmchari
// {
// 
    // int id;
    // float salary;
// 
// public:
    // void setid(int a)
    // {
        // salary = 820532.43;
        // cout << "Enter id of employee: " << a << endl;
        // cin >> id;
    // }
    // void getid()
    // {
        // cout << "employee id is : " << id << endl;
        // cout << endl;
    // }
// };
// 
// int main()
// {
// 
    // karmchari rishabh, kamal , mona;
    // 
    // rishabh.setid();
    // rishabh.getid();
    
// 
    // karmchari FB[10]; // for 10 employesss
   //declare array when store multiple person data 
    // for (int i = 0; i < 4; i++)
    // {
        // FB[i].setid(i + 1);
        // FB[i].getid();
    // }
// 
// 
// 
// 
    // return 0;
// }
// 
    // object as function argument

    #include<iostream>
    using namespace std;
    
    class sum{
        int a;
        int b;

        public:

        void setdata(int v1 ,int v2){
            a=v1;
            b=v2;
        }
        void sum_obj(sum o1 , sum o2){
            a=o1.a + o2.a;
            b=o2.b + o2.b;
        }
        void print(){
            cout<<"sum is :"<<a<<" + "<<b<<" = "<<a+b<<endl;
        }
    };

    int main() {

        sum ob1,ob2,ob3;
        ob1.setdata(2,2);
        ob1.print();

        ob2.setdata(3,3);
        ob2.print();

        ob3.sum_obj(ob1,ob2);
        ob3.print();

        
        
    
        return 0;
    }
