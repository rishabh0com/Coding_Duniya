#include <iostream>
using namespace std;

// Static variable *************
// static variable initilaize by defaul 0

// static is one and all object are share them

class employee
{

  int id;
  static int count; // written under and outside the class
  // static variable share all objets in program beacuse it variable is static
  // if you can start count variable with count=1000;
  // you cannnot itilaized under the class count
  // static int count=1000; // it show error
  // you can initilazed count outside the count variable
public:
  void setdata()
  {
    cout << "Enter ID Employee No :" << count + 1 << endl;
    cin >> id;
    count++;
  }

  void getdata()
  {
    cout << "Employee id No. " << count << " is :" << id << endl;
  }

  // Static Function ^^^^^^^^^********

  static void getCount()
  {
    // cout << id; // it show error beacuse,
    // static function only access static variable

    cout << "VAlue of count: " << count << endl;
  }
};

//-> count is the static data member of Class emplyee******

// write outside the class
int employee ::count; // you will have to declare outside thi class
                      // you can give value of count variable here
                      // int employee :: count=1000; // it not show error
int main()
{

  employee rishab, harry, shank;
  // rishah.id = 1; // connot do this beacuse id is private variable
  rishab.setdata();
  rishab.getdata();
  employee ::getCount(); // static function can derictly call static functio with class name

  harry.setdata();
  harry.getdata();
  employee ::getCount();

  shank.setdata();
  shank.getdata();
  employee ::getCount();

  return 0;
}