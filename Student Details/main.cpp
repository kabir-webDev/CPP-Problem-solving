#include <iostream>

using namespace std;

class Student{
public:
    string name,address;
    int zipcode, roll;

  Student(string a){
    cout<<" This is Student Details: "<<endl;
    name=a;
    cout<<" Name of The Student: "<<name<<"\n ";
  }
  Student(int a, string b,int c){
     roll=a; address=b; zipcode=c;
     cout<<"Roll of The Student: "<<roll<<"\n ";
     cout<<"Address of The Student: "<<address<<"\n ";
     cout<<"Zipcode of The Student: "<<zipcode;
  }


};
int main(){

    string name,address;
    int zipcode, roll;
    cout<<"Enter Name of The Student: "; cin>>name;
    cout<<"Enter Roll of The Student: "; cin>>roll;
    cout<<"Enter Address of The Student: "; cin>>address;
    cout<<"Enter Zipcode of The Student: "; cin>>zipcode; cout<<"\n";
    Student Object1(name);
    Student Object2(roll,address,zipcode);
   return 0;
}
