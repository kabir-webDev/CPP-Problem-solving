#include<iostream>
#include<iomanip>
using namespace std;
class Sikder{
public:
    void Kabir(){
    struct StudentInfo
    {
        char name[100];
        int id,in,sec,phn;
        string ad;
    } s[100];
    int n;
    string name;
    cout<<"\nEnter the number of the  students : ";
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        s[i].id = i+1;
        cout << "For student number: " << s[i].id <<endl;
        cout << "Enter name of the Student: ";
        cin >> s[i].name;
        cout << "Enter ID of the Student: ";
        cin >> s[i].id;
        cout << "Enter Intake of the Student: ";
        cin >> s[i].in;
        cout << "Enter Section of the Student: ";
        cin >> s[i].sec;
        cout << "Enter address of the Student: ";
        cin >> s[i].ad;
        cout << "Enter phone of the Student: ";
        cin >> s[i].phn;
        cout << endl;
    }
cout<<"\n";
cout<<"\\n Student No.----Name------ID------Intake------Section----";
cout<<"-address---phone"<<endl;
for(int i = 0; i < n; ++i)
{
    cout<<setw(8)<<i+1;
    cout<<setw(13)<< s[i].name;
    cout<<setw(11)<<s[i].id;
    cout<<setw(11)<<s[i].in;
    cout<<setw(11)<<s[i].sec;
    cout<<setw(11)<<s[i].ad;
    cout<<setw(11)<<s[i].phn;
    cout<<endl;
}
cout<<"\n";
    }
};
main()
{
    Sikder boss;
    boss.Kabir();
return 0;
}
