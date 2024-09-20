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
    abc(int m,int n){
        a=m;
      b=n;  
    }
    abc(abc &a1){
        a=a1.a;
        b=a1.b;
    }

void display(){
    cout<<a<<endl<<b;
}
};






int main()
{
    abc ob1;
    abc ob2(2,3);
    ob1.display();
    ob2.display();
    
   return 0;
}
