#include <iostream>

using namespace std;

class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"This is Constructor"<<endl;
  }
  //Destructor
  ~HelloWorld(){
    cout<<"This is Destructor"<<endl;
   }

   void display(){
     cout<<"Time to relax"<<endl;
   }
};
int main(){

   HelloWorld obj;

   obj.display();
   return 0;
}
