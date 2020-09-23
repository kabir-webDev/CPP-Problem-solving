#include <iostream>
using namespace std;

class Student{
    public:
    int marks1,marks2;
    double avg;
    string name;
    void calc_average(){
    cout<<"Enter Name of Student: ";
    cin>>name;
    cout<<"Enter Marks of A: ";
    cin>>marks1;
    cout<<"Enter Marks of B: ";
    cin>>marks2;
    avg=(marks1+marks2)/2;
    }
    void disp(){
    cout<<"Name of the Student is: "<<name<<endl;
    cout<<"Average marks is: "<<avg<<endl;
    }
};

int main()
{
    Student kabir;
    kabir.calc_average();
    kabir.disp();
    return 0;
}
