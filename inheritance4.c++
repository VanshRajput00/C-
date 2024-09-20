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
    void display2(){
        cout<<"subs="<<b-a<<endl;
    }
    void display3(){
        cout<<"mul="<<b*a<<endl;
    }
    void display4(){
        cout<<"div="<<b/a<<endl;
    }

};
class def:public abc{
    public:
    void display5(){
    cout<<"This is the simple operator use calculations--:"<<endl
    <<"10+20=30."<<endl
    <<"20-10=10."<<endl
    <<"10*20=200."<<endl
    <<"20/10=2."<<endl;
    }
};

int main(){
    def d;
    d.set(10,20);
    d.display();
    d.display2();
    d.display3();
    d.display4();
    d.display5();
}














