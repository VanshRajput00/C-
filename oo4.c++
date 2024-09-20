#include <iostream>
#include <cmath>
using namespace std;
class A{
    int a;
    public:
    A(){a=0;}
    A(int x){
        a=x;
    } 
    A(A&s){
        a=0;
    }
    void display(){
        cout<<a<<endl;
    }
    friend class B;

};
     class B{
    int a,b;
    public:
B(){
    a=0,
    b=0;
}

    B & operator =(A&o)
    {
        a=o.a;
        return *this;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }

};
int main(){
    A o1;
    A o2(35);
    A o3(o2);
    o3.display();
     A o4;
     o4=o2;
    o4.display();
    B o5;
    o5=o2;
    o5.display();

}
