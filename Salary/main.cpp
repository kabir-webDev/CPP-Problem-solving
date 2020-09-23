#include <iostream>

using namespace std;

class Organization{
public:
    int salary,hours,final_salary;
    void getInfo(){
    cin>>salary;
    cin>>hours;
    }
    void AddSal(){
    if(salary<500){
        final_salary=salary+10;
    }
    else{
        final_salary=salary;
    }
    void AddWork(){
    (hours>6)?  final_salary=salary+5 :  final_salary=salary;
    }
};

int main()
{
    Organization kabir;
    kabir.getInfo();
    kabir.AddSal();
    kabir.AddWork();
    return 0;
}
