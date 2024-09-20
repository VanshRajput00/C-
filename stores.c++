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
    --ob1.a=ob1.a+1;
  }
  abc operator +(abc t1,abc t2){
    abc t3;
    t3.a=t1.a+t2.a;
    return t3;
  }
int main ()
{
    abc ob1;
    --ob1;
    ob1.display();
    abc ob2;
    ob2=ob1+ob2;
    ob2.display();
return 0;
}