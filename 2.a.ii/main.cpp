#include<iostream>
using namespace std;

class fullProgram
{
public :
    string title;
    string author;
    int bookAmmount;
    void showInfo(){
    cout<<"\n"<<title<<" by "<<author<<" "<<"Copies in Hand: "<<bookAmmount<<endl;
    }
};


int main()
{
    fullProgram k;
    cout<<"Book title: ";
    cin>>k.title;
    cout<<"\nAuthor: ";
    cin>>k.author;
    cout<<"\nNumber of copies in hand: ";
    cin>>k.bookAmmount;
    k.showInfo();

    return 0;
}
