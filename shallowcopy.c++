#include <iostream>
#include <cmath>
using namespace std;
class abc{
int a,b;
public:
abc(){
 a=0;
 b=0;
    }
    abc(int j,int k){
        a=j;
      b=k;  
    }
    abc(abc &w1){
        a=w1.a;
        b=w1.b;
    }

void display(){
    cout<<a<<endl<<b;
}
};






int main()
{
    abc ob1(10,20);
    abc ob2;
    ob2=ob1;
    ob2.display();
    
   return 0;
}
