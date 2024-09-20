#include <iostream>
#include <cmath>
using namespace std;
class abc{
    public:
    int a;
    abc(){
        a=10;
    }
   
    void display(){
        cout<<a<<endl;
    }
};
   void operator --(abc &ob1){
    ob1.a=ob1.a-1;
  }
    void operator ++(abc &ob1){
    ob1.a=ob1.a+2;
  }
int main ()
{
    abc ob1;
    ob1.display();
    --ob1;
    ob1.display();
    ++ob1;
    ob1.display();
}