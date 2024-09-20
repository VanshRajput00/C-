#include <iostream>
#include <cmath>
using namespace std;
class abc{
int a;
int *p=(int *)malloc(4);
public:
abc(){
 a=0;
 *p=0;
    }
    abc(int x,int y){
        a=x;
      *p=y;  
    }
    abc(abc &a1){
        a=a1.a;
        p=(int *)malloc(4);
        *p=*(a1.p);
    }

void display(){
    cout<<a<<endl<<*p;
}
};






int main()
{
    abc ob1(10,20);
    abc ob2(ob1);
    ob2.display();
    
   return 0;
}
