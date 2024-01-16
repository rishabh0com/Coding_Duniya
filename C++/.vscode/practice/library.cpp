#include<iostream>
#include<string>
using namespace std;

class library
{
    int book_num;
    string book_name;
    string  author_name;
    string  publisher;
    float price;
    int no_of_copy;
    int no_of_copy_issued;

public:

    void initial_value(){

        cout<<"Enter Book Number :";
        cin>>book_num;
         cout<<"Book name:";
        cin>>book_name;
        cout<<"Author name";
        cin>>author_name;
        cout<<"publisher name";
        cin>>publisher;
        cout <<"Enter Price :";
        cin>>price;
    }

    void issue_book(void){
        cout<<"enter book detail"<<endl;
        
        initial_value();

        if(no_of_copy > no_of_copy_issued){
            cout<<"book issued"<<endl;
        }
        else{
            cout<<"book is not avalible"<<endl;
        }
        cout<<"Your book is issued"<<endl;
    }
    
    void return_(){
        
        cout<<"Enter Book detail->"<<endl;
        
        cout<<"enter book name:"<<endl;
        cin>>book_name;

        cout<<"book no:  "<<endl;
        cin>>book_num;
        
        cout<<"Author name:"<<endl;
        cin>>author_name;
      

          cout<<endl;

        cout<<"Your book is returned"<<endl;
    }
    
    void display(){
        cout<<"Book Name:"<<book_name<<endl;
        cout<<"Book Number:"<<book_num<<endl;
        cout<<"Author Name:"<<author_name<<endl;
        cout<<endl;
    }
};

int main() {
    
    library l1;
    int n;

    cout<<"Enter '1' for issue book : \n Enter '2' for return book :"<<endl;
    cin>>n;


    switch(n){
        case 1:
        l1.issue_book();
        break;
        case 2: 
        l1.return_();
    }
    l1.display();

    return 0;
}