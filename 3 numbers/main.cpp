#include <iostream>

using namespace std;

void sum(){
    int one,two,three,sum;
    cout << "Type Three Numbers: " << endl;
    cout << "Number-1: ";
    cin >> one;
    cout << "Number-2: ";
    cin >> two;
    cout << "Number-3: ";
    cin >> three;
    sum=one+two+three;
    cout << "summation of Three numbers is: "<< sum <<endl;
}

int main()
{
    sum();
    return 0;
}
