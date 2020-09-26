#include <bits/stdc++.h>

using namespace std;


    string name1;
    int id1;
    string dep1;
    int payment1;
    int payment2;


class Registration {
     public:


    double result;
    double pay;

    Registration(string name, int id,string dep,int payment)
    {
        name1=name;
        id1=id;
        dep1=dep;
        payment1=payment;
        payment2=payment;

    }


    double Calculatewaver(){

        result=25*(payment1/100);

     return result;
    };


    double needtopay(){

        pay=payment1-result;

     return pay;
    };




};

 void showStudentInfo()
    {

        cout<<"Student Info:"<<id1<<",Name:"<<name1<<",Dept:"<<dep1<<",Semester Fees:"<<payment2<<endl;


    }



int main()
{
    double waiver,payableammount;

    Registration me("Arman",181902016,"CSE",24000);


    //cout<<showStudentInfo()<<endl;
    showStudentInfo();

    waiver= me.Calculatewaver();

    cout<<"Waiver:"<<waiver<<endl<<endl;

payableammount= me.needtopay();

    cout<<"Payable Amount:"<<payableammount<<endl<<endl;


Registration friend1("Kamran",181902016,"EEE",23500);


  //cout<<showStudentInfo()<<endl;
  showStudentInfo();
    waiver= friend1.Calculatewaver();

    cout<<"Waiver:"<<waiver<<endl<<endl;

    payableammount= friend1.needtopay();

    cout<<"Payable Amount:"<<payableammount<<endl<<endl;






  Registration friend2("Dulal",181902016,"CSE",25500);
 //cout<<showStudentInfo()<<endl;
 showStudentInfo();
    waiver= friend2.Calculatewaver();

    cout<<"Waiver:"<<waiver<<endl<<endl;

    payableammount= friend2.needtopay();

    cout<<"Payable Amount:"<<payableammount<<endl<<endl;



}
