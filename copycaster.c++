#include <iostream>
#include <cmath>
using namespace std;
class abc{
int a,b;
public:
void set(int a,int b){
    this->a=a;
    this->b=b; 
}

void display(){
    cout<<a<<endl<<b;
}
};






int main()
{
    abc ob1;
    ob1.set(2,3);
    ob1.display();
    
   return 0;
}
