#include<iostream>

using namespace std;

class Example {
    int a, b,sum;
public:

    Example(int x, int y) {
        sum=x+y;
        cout << "Summation is: " << sum<<endl;
    }
};

int main() {
    Example Object(10, 20);
    return 0;
}
