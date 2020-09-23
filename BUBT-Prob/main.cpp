#include <iostream>

using namespace std;

class BUBT{
public:
    int No_of_Dept;
    string name,location;

    void show(){
    cout<<"Number Of the Department is: ";
    cout<<No_of_Dept<<endl;
    cout<<"Full Name is: ";
    cout<<name<<endl;
    cout<<"The Location is: ";
    cout<<location<<endl;
    }
};

int main()
{
    BUBT bbt;
    cout<<"Enter the number of department: ";
    cin>>bbt.No_of_Dept;
    cout<<"Enter the Full Name: ";
    cin>>bbt.name;
    cout<<"Enter the Location: ";
    cin>>bbt.location;
    bbt.show();
    return 0;
}
