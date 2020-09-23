#include <iostream>
using namespace std;

class Rect{
    double length,breadth,result;
    public:
    void Calc(){
        cout<<"Enter Length of Rectangle: ";
        cin>>length;
        cout<<"Enter Breadth of Rectangle: ";
        cin>>breadth;
        result=length*breadth;
        cout<<"Area of Rectangle is: ";
        cout<<result<<endl;
    }
};

int main()
{
    Rect kabir;
    kabir.Calc();
    return 0;
}
