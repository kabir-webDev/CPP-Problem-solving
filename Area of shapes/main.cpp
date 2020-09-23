#include <bits/stdc++.h>
using namespace std;

void Area(double x){
    double pi=3.1416,area_circle;
    area_circle=pi*x*x;
    cout<<"Area of Circle is: "<<area_circle<<"\n";
}
void Area(int a, int b){
    double area_rectangle;
    area_rectangle=a*b;
    cout<<"Area of Rectangle is: "<<area_rectangle<<"\n";
}
void Area(double a, double b,double y){
    double areaa_tringle;
    areaa_tringle= (a*b)*y;
    cout<<"Area of Triangle is: "<<areaa_tringle<<"\n";
}

int main()
{
    Area(10);
    Area(10,20);
    Area(30,15,.5);
    return 0;
}
