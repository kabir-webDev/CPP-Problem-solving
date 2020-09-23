#include <bits/stdc++.h>
using namespace std;

void Overload(int a, int b){
    cout<<"Old value of a: "<<a<<endl;
    cout<<"Old value of b: "<<b<<endl;
    swap(a,b);
    cout<<"New value of a: "<<a<<endl;
    cout<<"New value of b: "<<b<<"\n \n";
}
void Overload(double a, double b){
    cout<<"Old value of a: "<<a<<endl;
    cout<<"Old value of b: "<<b<<endl;
    swap(a,b);
    cout<<"New value of a: "<<a<<endl;
    cout<<"New value of b: "<<b<<"\n \n";;
}
void Overload(string a, string b){
    cout<<"Old value of a: "<<a<<endl;
    cout<<"Old value of b: "<<b<<endl;
    swap(a,b);
    cout<<"New value of a: "<<a<<endl;
    cout<<"New value of b: "<<b<<"\n \n";;
}

int main()
{
    Overload(10,20);
    Overload(11.5,33.5);
    Overload("Kabir","Sikder");
    return 0;
}
