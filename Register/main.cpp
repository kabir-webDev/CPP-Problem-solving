#include <iostream>
using namespace std;

class Registration{
public:
    Registration(int x,int y){
    cout<<x<<"+"<<y<<"=";
    void k(){
    int z=x+y;
    cout<<z;
    }
    }
};

int main()
{
    Registration obj(5,10);
    return 0;
}
