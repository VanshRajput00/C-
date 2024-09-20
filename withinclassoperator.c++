#include <iostream>
#include <cmath>
using namespace std;
class abc{
     int a;
    public:
   
    abc(){
        a=10;
        
    }
   
    void display(){
        cout<<a<<endl;
    }

     abc& operator --(){
        return *this;
  }
  abc& operator ++(){
    return *this;
  }
};
int main ()
{
    abc ob;
    ob.display();
    --ob;
    ob.display();
    ++ob;
    ob.display();
}