#include <iostream>
using namespace std;
class abc
{
    int a;
    int b;
    public:
    void set (int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"sum="<<a+b<<endl;
    }
};
class def:public abc{
};

int main(){
    def d;
    d.set(10,20);
    d.display();

}

