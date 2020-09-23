#include <iostream>

using namespace std;

class Student{
public:
    string name,address;
    int zipcode, roll;

  Student(string n,int r, string add,int zip){
    cout<<" This is Student Details: "<<endl;
    name=n; roll=r; address=add; zipcode=zip;
    cout<<" Name of The Student: "<<name<<"\n "<<"Roll of The Student: "<<roll<<"\n ";
    cout<<"Address of The Student: "<<address<<"\n "<<"Zipcode of The Student: "<<zipcode;
  }
  ~Student(){
    cout<<"\n\n Student Details is closed."<<endl;
   }

};
int main(){

    string name,address;
    int zipcode, roll;
    cout<<"Enter Name of The Student: "; cin>>name;
    cout<<"Enter Roll of The Student: "; cin>>roll;
    cout<<"Enter Address of The Student: "; cin>>address;
    cout<<"Enter Zipcode of The Student: "; cin>>zipcode; cout<<"\n";
    Student Object(name,roll,address,zipcode);
   return 0;
}
