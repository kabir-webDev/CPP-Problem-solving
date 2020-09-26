#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

main()
{
    struct student
    {
        char name[1000];
        int id,in,sec,phn;
        string ad;

    } s[1000];
    int n;
    string name;



    cout<<"\n Enter the number of the  students : ";
    cin>>n;

    for(int i = 0; i < n; ++i)
    {
        s[i].id = i+1;
        cout << "For student number" << s[i].id << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter ID: ";
        cin >> s[i].id;

        cout << "Enter Intake: ";
        cin >> s[i].in;

        cout << "Enter Section: ";
        cin >> s[i].sec;

        cout << "Enter address: ";
        cin >> s[i].ad;

        cout << "Enter phone: ";
        cin >> s[i].phn;

        cout << endl;
    }





cout<<"\\n *******************************  Result Sheet  ***************************"<<endl;
cout<<"\\n Student No.  Name    ID      Intake    Section  ";
cout<<" address   phone\\n"<<endl;


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

cout<<"\\n ****************************************************************************";

return 0;
}